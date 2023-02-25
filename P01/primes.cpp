#include <iostream>
using namespace std;

int is_prime(int n) {
    int j;
    for (int i=2;i<=n;i++){
        j = i;
        if (n%j==0){
            break;
        }
    }
    if (j==n){return true;}
    else {return false;}
}

int main() {
    int max;
    cin >> max;
    for (int i=0;i<=max;i++) {
        if (is_prime(i)==true) {
            cout << i << ' ';
        }
    }


    return 0;
}