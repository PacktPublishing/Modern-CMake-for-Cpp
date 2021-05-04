#include <iostream>
int main() {
#if defined(ABC)
    std::cout << "ABC is defined!" << std::endl;
#endif

#if (DEF > 2*4-3)
    std::cout << "DEF is greater than 5!" << std::endl;
#endif
}
