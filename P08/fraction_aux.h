/*
Create a class Fraction for performing arithmetic operations with fractions according to the specification below. You are free to name the attributes of the class, but the names and signatures of the member functions must be as stated.

    Use private int member fields to represent the numerator and the denominator.
    Provide two constructors for the class: a default constructor that initialises the numerator with 0 and denominator with 1, and a constructor that takes two int arguments, corresponding to the numerator and denominator values. You may assume that the denominator is always different from 0.
    The constructors must ensure that the fraction is stored in normalised form, that is, it must be irreducible and the denominator must always be positive. For example, the fractions 3/15, -3/-4 and 2/-4 must be stored, respectively, as 1/5, 3/4 and -1/2.
    Define public numerator() and denominator() accessors for the numerator and denominator fields.
    Provide public member functions to perform the basic arithmetic operations with fractions: sum, subtraction, multiplication and division, with the following corresponding signatures:

  Fraction sum(const Fraction& right)
  Fraction sub(const Fraction& right)
  Fraction mul(const Fraction& right)
  Fraction div(const Fraction& right)

The code of the following functions is given in the file fraction_aux.h and must be inserted in the correct place:

    Fraction::gcd, to calculate the greatest common divisor of 2 numbers;
    Fraction::normalise, to normalise a fraction;
    Fraction::write, to write a fraction on the screen.

Note that you need to declare these functions in the Fraction class. 

*/




#include <iostream>
#include <cmath>
using namespace std;

//! Compute the gcd of two numbers.
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
  int g = gcd(numerator_, denominator_);
  numerator_ /= g;
  denominator_ /= g;
  if (denominator_ < 0) {
    numerator_ = - numerator_;
    denominator_ = - denominator_;
  }
}

// shows fraction on the screen
void Fraction::write() const {
  cout << numerator_ << '/' << denominator_;
}