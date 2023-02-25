#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, result=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin >> x2;
        cin >> y2;
        if (i!=0) {
        result += abs(x1-x2) + abs(y1-y2);
        }
        x1 = x2;
        y1 = y2;
       
    }
    cout << result;
    return 0;
}