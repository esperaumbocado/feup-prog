#include <iostream>
#include "fraction.h"
using namespace std;

int gcd(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}


fraction mul(fraction a, fraction b){
    fraction result= {0,0};
    int gcdv=0;
    result.num = a.num * b.num;
    result.den = a.den * b.den;
    gcdv = gcd(result.num,result.den);
    result.num = result.num/gcdv;
    result.den = result.den/gcdv;
    if (result.den<0){
        result.den = -result.den;
        result.num = -result.num;
    }
    return result;
}

fraction add(fraction a, fraction b){
    int gcdv=0;
    fraction result = {0,0};
    result.num = a.num*b.den+b.num*a.den;
    result.den = a.den*b.den;
    gcdv = gcd(result.num,result.den);
    result.num = result.num/gcdv;
    result.den = result.den/gcdv;
    if (result.den<0){
        result.den = -result.den;
        result.num = -result.num;
    }
    return result;
}


int main(){
   { fraction a { -3, 2 }, b { -2, 3 };
  cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
    return 0;
}