#include <iostream>
#include "alist.h"
using namespace std;


void append(alist* a, const alist* b){

    int new_size = a->size + b->size;
    int* new_array = new int[new_size];


        // Copy A elements

        for (int i=0;i< a->size ;i++){
            new_array[i] = a->elements[i];
        }

        // Copy B elements

        for (int i=0;i< b->size ;i++){
            new_array[i+a->size]=b->elements[i];
        
        }


    delete [] a->elements;

    a->size = new_size;
    a->elements = new_array;
}


int main(){

    { alist* a = empty();
  const alist* b = empty();
  append(a, b);
  print(a);
  destroy(a);
  destroy(b); }

    { alist* a = empty();
  const int nB = 2;
  int eB[nB] = { 1, 2 };
  const alist* b = build(nB, eB);
  append(a, b);
  print(a);
  destroy(a);
  destroy(b); }

  return 0;
}