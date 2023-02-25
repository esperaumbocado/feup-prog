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

unsigned long bell(unsigned long n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long resultado = 0;
    for (unsigned long k = 0; k < n; k++) {
        resultado += bc(n - 1, k) * bell(k);
    }
    return resultado;
}

int main(){
    return 0;
}