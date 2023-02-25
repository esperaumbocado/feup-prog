#include <iostream>
using namespace std;
int main(){
    int input,last,result=0;
    cin >> input;
    while (input!=0) {

        last = input % 10;
        result = result * 10 + last;
        input = input / 10;
    }
        cout << result;
    return 0;
}