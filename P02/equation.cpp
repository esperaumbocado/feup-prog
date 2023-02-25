#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2){
    double delta = (pow(b,2)) - 4.0*a*c;
    int r;

    if (delta==0){
        r = 1;
        x1 = -b/(2.0*a);
        x2 = NAN;
        return r;
    }
    else if (delta>0){
        r = 2;
        x1 = ((-b)-sqrt(delta))/(2.0*a);
        x2 = ((-b)+sqrt(delta))/(2.0*a);
        return r;
    }
    else if (delta<0){
        r = 0;
        x1 = NAN;
        x2 = NAN;
        return r;
    }
    return 0;
}


int main(){
    return 0;
}