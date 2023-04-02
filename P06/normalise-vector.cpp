#include <iostream>
#include "print_vector.h"
using namespace std;

  template <typename T>
  void normalise(vector<T>& v, const T& min, const T& max){

    int size = v.size();
    for (int i =0;i<size;i++){
        if (v[i]<min){
            v[i]=min;
        }else if (v[i]>max){
            v[i]=max;
        }
    }
  }


  int main(){

    { vector<int> v { }; normalise(v, 0, 1); print(v); }
    { vector<int> v { 1, 2, 3, 4, 5 }; normalise(v, 1, 5); print(v); }
    { vector<int> v { 1, 2, 3, 4, 5 }; normalise(v, 3, 4); print(v); }

    return 0;
  }