#pragma once
class RandomNumberGenerator {
 public:
  virtual int Get() = 0;
  virtual ~RandomNumberGenerator() = default;
};
