#include <iostream>
using namespace std;


int size_of_array(const char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}


char* repeat(const char str[], int n){
    int size_of_str = size_of_array(str);
    char* newstr = new char[(size_of_str*n+1)];
    int internal_counter=0;    for (int i=0;i<n;i++){
        for (int j=0;j<size_of_str;j++){
            newstr[internal_counter] = str[j];
            internal_counter++;
        }
    }
    newstr[internal_counter] = '\0';
    return newstr;

}



int main(){

{ const char str[] = "H e l l o";
  char* r = repeat(str, 2);
  cout << "\"" << r << "\"\n";
  delete [] r; }

  { const char str[] = "C/C++@LEIC.";
  char* r = repeat(str, 5);
  cout << "\"" << r << "\"\n";
  delete [] r; }


    return 0;
}