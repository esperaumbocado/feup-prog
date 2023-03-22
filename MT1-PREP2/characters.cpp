#include <iostream>
using namespace std;


int main(){

    char input;
    cin >> input;

    if ((input>='A'&&input<='Z')||(input>='a'&&input<='z')){
        cout << "LETTER";
    }
    else if (input>='0' && input<='9'){
        cout << "DIGIT";
    }
    else{
        cout << "OTHER"; 
    }
    return 0;
}