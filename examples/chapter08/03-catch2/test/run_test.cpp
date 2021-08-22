#include <catch2/catch_test_macros.hpp>
#include <string>
#include <iostream>
#include <sstream>
#include "calc.h"

using namespace std;
int run(); // declaration
TEST_CASE("RunOutputsCorrectEquations", "[run]") {
  string expected {"2 + 2 = 4\n3 * 3 = 9\n"};
  stringstream buffer;
  // redirect cout
  auto prevcoutbuf = cout.rdbuf(buffer.rdbuf());
  run();
  auto output = buffer.str();
  // restore original buffer
  cout.rdbuf(prevcoutbuf);
  CHECK(expected == output);
}
