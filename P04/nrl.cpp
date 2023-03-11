#include <iostream>
using namespace std;



int nrl(const char s[], char low[]){
    int counter = 0, increase_counter = 0;
    int letters_array[26] = {0};

    for (int i = 0; s[i] != '\0'; i++){

        if (s[i] != ' '){

            if (s[i] >= 'a' && s[i] <= 'z'){
                letters_array[s[i] - 'a'] += 1;
            }
            else{
                letters_array[s[i] - 'A'] +=1;
            }
        }
    }

    for (int j = 0; j < 26; j++){
        if (letters_array[j]==1){
            counter += 1;
            low[increase_counter] = 'a' + j;
            increase_counter += 1;
        }
    }

    low[increase_counter] = '\0';
    return counter;
}


int main(){
    
    { const char s[] = "";
  char l[27] = { -1 };
  int r = nrl(s, l);
  cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n"; }


    { const char s[] = "  F C U P  F E U P  Porto  ";
  char l[27] = { -1 };
  int r = nrl(s, l);
  cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n"; }

       { const char s[] = "The quick brown fox jumps over the lazy dog";
  char l[27] = { -1 };
  int r = nrl(s, l);
  cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n"; }


       { const char s[] = " abC dEf GhI jKl MnO pQr StU vWx yZ ABc DeF gHi JkL mNo PqR sTu VwX Yz";
  char l[27] = { -1 };
  int r = nrl(s, l);
  cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n"; }


    return 0;
}