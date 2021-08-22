#include <gtest/gtest.h>
#include "calc.h"
#include "mocks/rng_mock.h"

using namespace ::testing;
class CalcTestSuite : public Test {
 protected:
  RandomNumberGeneratorMock rng_mock_;
  Calc sut_{&rng_mock_};
};

TEST_F(CalcTestSuite, SumAddsTwoInts) {
  EXPECT_EQ(4, sut_.Sum(2, 2));
}

TEST_F(CalcTestSuite, MultiplyMultipliesTwoInts) {
  EXPECT_EQ(12, sut_.Multiply(3, 4));
}

TEST_F(CalcTestSuite, AddRandomNumberAddsThree) {
  EXPECT_CALL(rng_mock_, Get()).Times(1).WillOnce(Return(3));
  EXPECT_EQ(4, sut_.AddRandomNumber(1));
}
