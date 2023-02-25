#include <iostream>
using namespace std;

unsigned long bc(unsigned long n, unsigned long k) {
    if (k > n) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }
    return bc(n - 1, k - 1) * n / k;
}

int main(){
    return 0;
}