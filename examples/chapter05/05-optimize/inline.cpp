#include <iostream>

using namespace std;
struct X {
  void im_inlined(){ cout << "hi\n"; };
  void me_too();
};
inline void X::me_too() { cout << "bye\n"; };

int main() {
  X x;
  x.im_inlined();
  x.me_too();
  return 0;
}
