#include <iostream>
#include "complex.h"
using namespace std;

complex add_complex(const complex a,const complex b){
    complex result;
    result.real = a.real+b.real;
    result.img = a.img+b.img;
    return result;
}

complex mul_complex(const complex a,const complex b){
    complex result;
    result.real = (a.real*b.real)-(a.img*b.img);
    result.img = (a.real*b.img+b.real*a.img);
    return result;
}

void mandel(complex c, int n, complex z[]){

    for (int i=0;i<n;i++){

        if (i==0){
            z[i].real=0;
            z[i].img=0;
        }else{
            z[i]=add_complex(mul_complex(z[i-1],z[i-1]),c);
        }
    }
}

int main(){

    { complex c = { 0, 0 };
  const int n = 1;
  complex z[n];
  mandel(c, n, z);
  print(z, n); }


    { complex c = { 0, 0 };
  const int n = 3;
  complex z[n];
  mandel(c, n, z);
  print(z, n); }

    { complex c = { 1, 1 };
  const int n = 3;
  complex z[n];
  mandel(c, n, z);
  print(z, n); }

    return 0;
}