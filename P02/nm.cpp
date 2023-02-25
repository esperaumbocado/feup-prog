#include <iostream>
using namespace std;

unsigned long next_mersenne(unsigned long n){

    int poiwer=0;
    unsigned long number,poiwt;

    while(true){
        for (int j=0;j<=poiwer;j++){
            if (j==0){
                poiwt = 1;
            }
            else{
            poiwt = 2 * poiwt;
            }
        }
        number = poiwt - 1;

        if (number>=n){
            return number;
            break;
        }else{
            poiwer += 1;
        }
        
    }



}


int main(){
    cout << next_mersenne(4294967296UL) << '\n';
    return 0;
}