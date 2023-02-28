#include <iostream>
using namespace std;

unsigned long bc(unsigned long j, unsigned long l) {
    if (l > j) {
        return 0;
    }
    if (l == 0 || l == j) {
        return 1;
    }
    return bc(j - 1, l - 1) * j / l;
}

int main(){
    return 0;
}