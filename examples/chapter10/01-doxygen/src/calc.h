#pragma once
#include "rng.h"

/**
  This class does some simple calculations
*/
class Calc {
  RandomNumberGenerator* rng_;
 public:
   Calc(RandomNumberGenerator* rng);
   /**
    Sum two integers
    @result a + b
   */
   int Sum(int a, int b);
   /**
    Multiply... Who would have thought?
    @param a the first factor
    @param b the second factor
    @result The product
   */
   int Multiply(int a, int b);
   /**
    Adds randomly generated number to the parameter
   */
   int AddRandomNumber(int a);
};
