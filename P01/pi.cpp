#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    int k,d;
    double result=0;
    std::cin >> k;
    std::cin >> d;

    for (int i=0; i<=k ;i++) {
        result += (pow(-1,i)/(2*i+1));
    }
    result = 4*result;
    std::cout << std::fixed << std::setprecision(d) << result;
    return 0;
}