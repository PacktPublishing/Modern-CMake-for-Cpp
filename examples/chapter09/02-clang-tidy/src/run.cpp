#include <iostream>
#include "calc.h"
using namespace std;

int run() {
  auto c = new Calc();
  cout << "2 + 2 = " << c->Sum(2, 2) << endl;
  cout << "3 * 3 = " << c->Multiply(3, 3) << endl;
  return 0;
}
