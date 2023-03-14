#include <iostream>
using namespace std;


int size_of_array(const char s[]){
    int i = 0;
    while (s[i] != '\0'){
        i++;
    }

    return (i+1);
}



int search_for_letter(const char search, const char s[]){

    int size = size_of_array(s);
    int counter = 0;

    for (int i = 0;i<size;i++){
        
        if (s[i] == search || s[i] == (search+32)){
            counter++;
        }
    }

    return counter;
}

bool pangram(const char s[], char m[]){

    int letters_array[26] = {0};
    int counter=0;
    int internal_counter=0;

    for (char i = 'A'; i<='Z';i++){

        letters_array[i-65] = search_for_letter(i,s);
    }
    

    for (int i = 0;i<26;i++){

        if (letters_array[i]>=1){
            counter += 1;
        }else if (letters_array[i]==0){
            m[internal_counter]=char(i+97);
            internal_counter++;
        }
    }

    if (counter==26){
        m[0] = '\0';
        return true;
    }
    else {return false;}

    return 0;
}


int main(){

    { char s[] = "The quick brown fox jumps over the lazy dog";
  char m[27] = { -1 };
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n"; }


     return 0;
}