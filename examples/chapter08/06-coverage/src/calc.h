#pragma once
#include "rng.h"

class Calc {
  RandomNumberGenerator* rng_;
 public:
   Calc(RandomNumberGenerator* rng);
   int Sum(int a, int b);
   int Multiply(int a, int b);
   int AddRandomNumber(int a);
};
