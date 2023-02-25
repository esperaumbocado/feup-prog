#include <iostream>
using namespace std;

int main(){
    char inp;
    int size,n=0,c=0,nc=0;
    cin >> size;
    for (int i=0; i<size; i++){
        cin >> inp;
        if (isdigit(inp)) {
            n += 1;
        } 
        else if (isalpha(inp)) {
            c += 1;
        } 
        else {
            nc += 1;
        }
    }
    cout << c << ' ' << n << ' ' << nc;
    return 0;
}