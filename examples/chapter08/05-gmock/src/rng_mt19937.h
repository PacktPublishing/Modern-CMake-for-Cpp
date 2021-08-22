#include "rng.h"
class RandomNumberGeneratorMt19937
      : public RandomNumberGenerator {
 public:
  int Get() override;
};
