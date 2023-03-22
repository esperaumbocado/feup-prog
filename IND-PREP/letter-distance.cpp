#include <iostream>
using namespace std;

int letterDistance(string str1,string str2){

    int size =  max(str1.length(),str2.length());
    int result=0;

    for (int i=0;i<size;i++){
        result += abs(str1[0]-str2[0]);
    }
    return result;
}


int main(){

    
    return 0;
}