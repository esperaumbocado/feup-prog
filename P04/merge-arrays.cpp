#include <iostream>
#include "print_array.h"
#include <cmath>
#include <tuple>
using namespace std;



int max_in_array(const int a[], int n){

    int maxi=0;

    for (int i = 0; i<n; i++){

        if (i==0){
            maxi = a[i];
        }
        else {
            maxi = max(maxi,a[i]);
        }
    }

    return maxi;
}

bool in_array(const int a[],int n, int wanted){

    for (int i=0;i<n;i++){

        if (a[i]==wanted){
            return true;
            break;
        }
    }

    return false;
}



void merge_arrays(const int a[], int na, const int b[], int nb, int c[]){

    int max_a=0, max_b=0, max_g=0;

    max_a = max_in_array(a,na);
    max_b = max_in_array(b,nb);
    max_g = max(max_a,max_b);

    for (int i = 0; i<max_g; i++){

        int array_counter=0;

        if (in_array(a,na,i)||in_array(b,nb,i)){
            c[array_counter]=i;
            array_counter += 1;
        }
    }
}


int main(){
    { const int NA = 4, NB = 6;
  int a[NA] = { 1, 2, 4, 7};
  int b[NB] = { 0, 3, 5, 6, 8, 9};
  int c[NA+NB];
  merge_arrays(a, NA, b, NB, c);
  print_array(c, NA+NB); 
  cout << in_array(a,NA,7);}

  return 0;
}