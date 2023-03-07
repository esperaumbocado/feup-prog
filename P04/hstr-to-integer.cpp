#include <iostream>
#include <cmath>
using namespace std;


int size_of_hstr(const char hstr[]){

    int counter = 0;

    for (int i=0;i<100000;i++){
        if (hstr[i]==0){
            break;
        }
        counter+=1;
    }

    return counter;
}


unsigned long hstr_to_integer(const char hstr[]){

    int len = size_of_hstr(hstr);
    unsigned long result=0;

    for (int i=0; i<len; i++){

        char temp;
        int number;
        temp = hstr[len-i-1];

        if (temp == '0'){number=0;}
        if (temp == '1'){number=1;}
        if (temp == '2'){number=2;}
        if (temp == '3'){number=3;}
        if (temp == '4'){number=4;}
        if (temp == '5'){number=5;}
        if (temp == '6'){number=6;}
        if (temp == '7'){number=7;}
        if (temp == '8'){number=8;}
        if (temp == '9'){number=9;}
        if (temp == 'A' || temp == 'a'){number = 10;}
        if (temp == 'B' || temp == 'b'){number = 11;}
        if (temp == 'C' || temp == 'c'){number = 12;}
        if (temp == 'D' || temp == 'd'){number = 13;}
        if (temp == 'E' || temp == 'e'){number = 14;}
        if (temp == 'F' || temp == 'f'){number = 15;}

        result += number * pow(16,i);
    }

    return result;
}


int main(){

    cout << hstr_to_integer("0") << '\n';
    cout << hstr_to_integer("A") << '\n';
    cout << hstr_to_integer("a666666666662222") << '\n';
    cout << size_of_hstr("a666666666662222");



    return 0;
}