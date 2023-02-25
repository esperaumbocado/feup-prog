#include <iostream>
using namespace std;

int power(int n){
        int pow;
        for (int j=0;j<=n;j++){
            if (j==0){
                pow = 1;
            }
            else{
            pow *= 2 * pow;
            }
        }
        return pow;
}


int main(){
    cout << power(1);
    return 0;
}
