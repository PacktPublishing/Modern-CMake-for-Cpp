#include <gtest/gtest.h>
#include <string>
#include <iostream>
#include <sstream>
#include "calc.h"

using namespace std;
int run(); // declaration
TEST(RunTest, RunOutputsCorrectEquations) {
  string expected {"2 + 2 = 4\n3 * 3 = 9\n"};
  stringstream buffer;
  // redirect cout
  auto prevcoutbuf = cout.rdbuf(buffer.rdbuf());
  run();
  auto output = buffer.str();
  // restore original buffer
  cout.rdbuf(prevcoutbuf);
  EXPECT_EQ(expected, output);
}
