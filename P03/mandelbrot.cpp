#include <iostream>
#include "complex.h"
#include <cmath>
using namespace std;

void add(const complex& a, const complex& b, complex& r){
    r.x = a.x+b.x;
    r.y = a.y+b.y;
}

void mul(const complex& a, const complex& b, complex& r){
    r.x = a.x*b.x-a.y*b.y;
    r.y = a.x*b.y+a.y*b.x;
}

double norm(const complex& c){
    double r=0;
    r = sqrt(pow(c.x,2)+pow(c.y,2));
    return r;
}


void mandelbrot(const complex& c, unsigned int n, complex& z_n){

    complex x;

    for (unsigned int i = 0;i<=n;i++) {

        if (i==0){
            x = {0,0};
        }else{
            mul(x,x,z_n);
            add(z_n,c,x);

        }
    }

    z_n = x;
}



int main(){
    return 0;
}