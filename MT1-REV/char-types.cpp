#include <iostream>
using namespace std;

 int main(){

    int inputs;
    int chars=0,numbers=0,others=0;
    cin >> inputs;

    for (int i=0;i<inputs;i++){
        char input;
        cin >> input;

        if ((input >= 'a' && input <= 'z') || (input >='A' && input <= 'Z')){
            chars++;
        }

        else if (input >= '0' && input <='9'){
            numbers++;
        }

        else{
            others++;
        }
    }

    cout << chars << " " << numbers << " " << others;

    return 0;
 }