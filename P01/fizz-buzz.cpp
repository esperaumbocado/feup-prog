#include <iostream>
using namespace std;

int main(){
    int fnum;
    cin >> fnum;
    for (int i=1;i<=fnum;i++) {
        if ((i%3 == 0)&&(i%5 == 0)) {
        }else if (i%3==0) {
            cout << "Fizz ";
        }else if (i%5==0) {
            cout << "Buzz ";
        } 
        else {
            cout << i << ' ';
        }
    }
    return 0;
}