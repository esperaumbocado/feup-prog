#include <iostream>
using namespace std;

int size_of_cstr(const char str[]){
    int i=0;
    while(str[i]!=0){
        i++;
    }
    return i;
}

char* repeat(const char str[], int n){

    int size = size_of_cstr(str);
    char* result= new char[size*n+1];

    int internal_counter=0;
    for(int i=0;i<n;i++){
        for (int j=0; j<size;j++){
            result[internal_counter]=str[j];
            internal_counter++;
        }
    }

    result[internal_counter]='\0';
    return result;

}


int main(){

    { const char str[] = "H e l l o";
  char* r = repeat(str, 2);
  cout << "\"" << r << "\"\n";
  delete [] r; }

    return 0;
}