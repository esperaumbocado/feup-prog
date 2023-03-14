#include <iostream>
#include "print_array.h"
using namespace std;

int filter_duplicates(const int a[], int n, int b[]){

    int result,internal_counter=0;

    for (int i=0;i<n;i++){

        if (i==0){
            b[internal_counter] = a[i];
            internal_counter++;
        }
        else if (a[i] != a[i-1]){
            b[internal_counter] = a[i];
            internal_counter++;
        }else{continue;}
    }

    result = internal_counter;

    return result;

}


int main(){

    { const int n = 12;
  const int a[n] = { 1, 2, 2, 3, 3, 3, 1, 1, 1, 2, 2, 3 };
  int b[n] = { 0 };
  int nf = filter_duplicates(a, n, b);
  print_array(b, nf); }

    { const int n = 1;
  const int a[n] = { 1 };
  int b[n] = { 0 };
  int nf = filter_duplicates(a, n, b);
  print_array(b, nf); }

    { const int n = 2;
  const int a[n] = { 999, 999 };
  int b[n] = { 0 };
  int nf = filter_duplicates(a, n, b);
  print_array(b, nf); }

    { const int n = 3;
  const int a[n] = { 3, 2, 1 };
  int b[n] = { 0 };
  int nf = filter_duplicates(a, n, b);
  print_array(b, nf); }


  return 0;
}