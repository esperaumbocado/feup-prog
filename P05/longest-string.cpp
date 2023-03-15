#include <iostream>
using namespace std;

const char* longest(const char* pa[]){

    int size_of_strings[] = {0};
    int i,position_of_max;

    for (i=0;pa[i]!=nullptr;i++){

        for (int j=0;pa[i][j]!='\0';j++){

            size_of_strings[i] += 1;
        }
    }

    for (int j=0;j<i;j++){
        for (int k=0;k<i-1;k++){
            if (size_of_strings[k] > size_of_strings[k+1]){
                position_of_max = k;
            }else{
                position_of_max = k+1;
            }
        }
    }

    return pa[position_of_max];
}


int main(){

    { const char* pa[] = { "C++", nullptr };
  cout << "\"" << longest(pa) << "\"\n"; }

    { const char* pa[] = { "", "0123", "Hello", "world", "!", nullptr };
  cout << "\"" << longest(pa) << "\"\n"; }


    return 0;
}
