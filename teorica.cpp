#include <iostream>
using namespace std;

int main(){
    struct data1 {
        double x;
        double y;
    };

    struct data2 {
        data1 a;
        data1 b;
        data1 c;
    };

    cout << sizeof(data1) << ' ' << sizeof(data2);
    return 0;
}