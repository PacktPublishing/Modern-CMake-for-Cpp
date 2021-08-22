#include <gtest/gtest.h>
#include <string>
#include <iostream>
#include <sstream>
#include "calc.h"

using namespace std;
int run(); // declaration
TEST(RunTest, RunOutputsCorrectEquations) {
  stringstream buffer;
  // redirect cout
  auto prevcoutbuf = cout.rdbuf(buffer.rdbuf());
  run();
  auto output = buffer.str();
  // restore original buffer
  cout.rdbuf(prevcoutbuf);
  EXPECT_EQ(0, output.rfind("Random dice throw + 1 = ", 0)) << "Incorrect message";
}
