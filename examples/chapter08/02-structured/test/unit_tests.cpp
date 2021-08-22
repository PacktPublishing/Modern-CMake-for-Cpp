#include <string>
void SumAddsTwoIntegers();
void MultiplyMultipliesTwoIntegers();
int RunOutputsCorrectEquations();

int main(int argc, char *argv[]) {
  if (argc < 2 || argv[1] == std::string("1"))
    SumAddsTwoIntegers();

  if (argc < 2 || argv[1] == std::string("2"))
    MultiplyMultipliesTwoIntegers();

  if (argc < 2 || argv[1] == std::string("3"))
    RunOutputsCorrectEquations();
}
