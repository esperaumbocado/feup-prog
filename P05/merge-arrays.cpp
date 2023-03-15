#include <iostream>
#include "print_array.h"
using namespace std;






int* merge_arrays(const int a[], int na, const int b[], int nb){

    // Copy a

    int* c = new int[na+nb];
    int temp;

    for (int i=0;i<na;i++){    
        c[i] = a[i];
    }

    for (int i=0;i<nb;i++){
        c[i+na] = b[i];
    }

    for (int j=0;j<na+nb;j++){
        for (int i=0;i<na+nb-1;i++){
            if (c[i+1] < c[i]){
                temp = c[i];
                c[i] = c[i+1];
                c[i+1]= temp;
            }
        }

    }

    return c;
}


int main(){

    { const int NA = 4, NB = 6;
  int a[NA] = { 1, 2, 4, 7};
  int b[NB] = { 0, 3, 5, 6, 8, 9};
  int* c = merge_arrays(a, NA, b, NB);
  print_array(c, NA+NB);
  delete [] c; }


  { const int NA = 6, NB = 4;
  int a[NA] = { 0, 3, 5, 6, 8, 9};
  int b[NB] = { 1, 2, 4, 7};
  int* c = merge_arrays(a, NA, b, NB);
  print_array(c, NA+NB);
  delete [] c; }

    { const int NA = 2, NB = 3;
  int a[NA] = { 0, 1 };
  int b[NB] = { 2, 3, 4 };
  int* c = merge_arrays(a, NA, b, NB);
  print_array(c, NA+NB);
  delete [] c; }

  return 0;
}