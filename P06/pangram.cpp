#include <iostream>
using namespace std;


bool pangram(const string& s, string& m){

    int letter_count[26] = {0};
    bool flag_r=true;
    int size = s.length();

    for (int i=0;i<size;i++){

        if (s[i]>='A' && s[i]<='Z'){
            letter_count[s[i]-'A']++;
        }
        else if (s[i]>='a' && s[i]<= 'z'){
            letter_count[s[i]-'a']++;
        }
    }

    for (int i=0;i<26;i++){
        if (letter_count[i]==0){
            flag_r = false;
            m.push_back(char(i+'a'));
        }
        else{
            continue;
        }
    }


    return flag_r;

}




int main(){


    { string s = " abC dEf GhI jKl MnO pQr StU vWx yZ ";
  string m = "";
  bool r = pangram(s, m);
  cout << '\"' << s << "\" " 
       << boolalpha << r << " \"" << m << "\"\n"; }

    { string s = "A quick brown fox jumps over a classy dog";
  string m = "";
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n"; }


     	

{ string s = "";
  string m = "";
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n"; }
        	




    return 0;
}