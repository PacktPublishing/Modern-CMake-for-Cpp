#include <iostream>
#include "calc.h"
#include "rng_mt19937.h"
using namespace std;

int run() {
  auto rng = new RandomNumberGeneratorMt19937();
  Calc c(rng);
  cout << "Random dice throw + 1 = "
       << c.AddRandomNumber(1) << endl;
  delete rng;
  return 0;
}
