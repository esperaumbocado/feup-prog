#include <iostream>
using namespace std;


class Fraction
{
    public:
        Fraction(){numerators = 0; denominators = 1;}

        Fraction(int numerat,int denominat){
            numerators = numerat;
            denominators = denominat;
            normalise();
        }

        int numerator() const {return numerators;}

        int denominator() const {return denominators;}


        Fraction sum(const Fraction& right){
            int num = numerators * right.denominators + denominators * right.numerators;
            int den = denominators * right.denominators;
            return Fraction(num,den);
        }

        Fraction sub(const Fraction& right){
            int num = numerators * right.denominators - denominators * right.numerators;
            int den = denominators * right.denominators;
            return Fraction(num,den);
        }


        Fraction mul(const Fraction& right){

            int num = numerators * right.numerators;
            int den = denominators * right.denominators;
            return Fraction(num,den);
        }

        Fraction div(const Fraction& right){
            int num = numerators * right.denominators;
            int den = denominators * right.numerators;
            return Fraction(num,den);
        }

        int gcd(int a,int b);
        void normalise();
        void write() const;
    
    private:
        int numerators;
        int denominators;
};


int Fraction::gcd(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}

//! Normalize a fraction.
void Fraction::normalise() {
  int g = gcd(numerators, denominators);
  numerators /= g;
  denominators /= g;
  if (denominators < 0) {
    numerators = - numerators;
    denominators = - denominators;
  }
}

// shows fraction on the screen
void Fraction::write() const {
  cout << numerators << '/' << denominators;
}



int main(){

    { Fraction().sum({2, 4}).write(); cout << ' ';
  Fraction(1,1).sum({2, 4}).write(); cout << ' ';
  Fraction(2,4).sum({3, 9}).write(); cout << ' ';
  Fraction(-2,4).sum({1, 2}).write(); cout << ' ';
  Fraction(3,27).sum({-27, 81}).write(); cout << '\n'; }


  return 0;
}