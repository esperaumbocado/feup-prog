#include <iostream>
using namespace std;



int size_of_cstr(const char s[]){
    int i=0;
    while (s[i]!='\0'){
        i++;
    }
    return i+1;
}

bool pangram(const char s[], char m[]){

    int size = size_of_cstr(s);
    int letter_count[26] = {0};

    for (int i=0;i<size;i++){

        if ((s[i]>='A') && (s[i]<='Z')){
            letter_count[s[i]-65]++;
        }
        else if ((s[i]>='a') && (s[i]<='z')){
            letter_count[s[i]-97]++;
        }
        else{continue;}
    }

    int internal_counter=0;
    bool flag=true;

    for (int i=0;i<26;i++){
        if (letter_count[i]==0){
            flag = false;
            m[internal_counter]=char(i+97);
            internal_counter++;
        }
    }

    m[internal_counter]='\0';
    if (flag){return true;}
    else {return false;}
}


int main(){

    { char s[] = "";
  char m[27] = { -1 };
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
     << boolalpha << r << " \"" << m << "\"\n"; }


    { char s[] = " Stu yZ abC GhI MnO pQr   ";
  char m[27] = { -1 };
  bool r = pangram(s, m);
  cout << '\"' << s << "\" " 
       << boolalpha << r << " \"" << m << "\"\n"; }


    { char s[] = " abC dEf GhI jKl MnO pQr StU vWx yZ ";
  char m[27] = { -1 };
  bool r = pangram(s, m);
  cout << '\"' << s << "\" " 
       << boolalpha << r << " \"" << m << "\"\n"; }
       

    return 0;
}