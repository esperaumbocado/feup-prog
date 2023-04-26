#include <iostream>
#include "Color.h"
using namespace std;


unsigned char Color::red() const{return red_;}
unsigned char Color::green() const{return green_;}
unsigned char Color::blue() const{return blue_;}

const Color Color::RED = Color(255,0,0);
const Color Color::GREEN = Color(0,255,0);
const Color Color::BLUE = Color(0,0,255);
const Color Color::WHITE = Color(255,255,255);
const Color Color::BLACK = Color(0,0,0);


Color::Color(unsigned char red, unsigned char green, unsigned char blue){
    this->red_ = red;
    this->green_ = green;
    this->blue_ = blue;
}

Color::Color(const Color& c){
    red_ = c.red_;
    green_ = c.green_;
    blue_ = c.blue_;
}

bool Color::equal_to(const Color& other) const{
    if (red_==other.red_ && green_==other.green_ && blue_==other.blue_){return true;}
    else {return false;}
}


void Color::invert(){
    this->red_ = 255-red_;
    this->green_ = 255-green_;
    this->blue_ = 255-blue_;
}

int main(){

    { cout << boolalpha 
       << Color::WHITE.equal_to(Color::WHITE) << ' '
       << Color::BLACK.equal_to(Color::RED) << ' '
       << Color::BLUE.equal_to(Color::GREEN) << '\n'; }


    return 0;
}