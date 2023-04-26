#include <iostream>
#include "Point.h"
using namespace std;


void Point::show() const{
    std::cout << "(" << x << "," << y << ")";
    }

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int x,int y){
    this->x = x;
    this->y = y; 
}

int main(){

    { Point p1, p2(0, 1); 
  p1.show(); p2.show(); cout << '\n'; }

  return 0;
}