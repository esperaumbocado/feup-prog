#include <iostream>
using namespace std;

int main(){
    struct data {
        double x;
        double y;
    };

    data a {1.2,1.3},b {3.1,5.3};
    void f(const data& a,data& b) {
        b.x = a.y = 0;
    }

    return 0;
}