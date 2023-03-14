#include <iostream>
using namespace std;



int f(const int a[], int b[]){
    int c[] {0,1,2};
        
    for (int v : b) c[0] += v;
    for (int& v : c) v = b[0];


    return c[0] + c[1] + c[2];
}





int main(){

    cout << f({0,1},{0,2});

    return 0;
}