#include <iostream>
using namespace std;


unsigned long pell(unsigned long n){
    unsigned long result=0,current=0,last,last2;
    
    for (unsigned long i=0;i<=n;i++){
        if (i==0){
            result += 0;
        }
        else if (i==1){
            result += 1;
        }else{
            result = 2*last + current;
        }

        last = current;  // Save past one
        current = result;  // Save current
        last2 = 2*last + current; // Sum the lasts
        }
    return last2;
}


int main(){
    cout << pell(5) << '\n';
    return 0;
}