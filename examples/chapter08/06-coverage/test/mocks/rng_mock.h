#pragma once
#include "gmock/gmock.h"

class RandomNumberGeneratorMock : public RandomNumberGenerator {
 public:
  MOCK_METHOD(int, Get, (), (override));
};
