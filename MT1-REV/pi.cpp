#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int k,d;
    int numerator;
    double result=0;

    cin >> k;
    cin >> d;

    for (int n=0;n<=k;n++){
        numerator = (n%2==0) ? 1 : -1;
        result += (numerator/(2.0*n+1));
    }

    result = result * 4.0;

    std::cout << std::fixed << std::setprecision(d) << result ;

    return 0;
}