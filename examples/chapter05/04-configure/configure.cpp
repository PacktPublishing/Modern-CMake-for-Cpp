#include <iostream>
#include "configured/configure.h"

// special macros to convert definitions into c-strings:
#define str(s) #s
#define xstr(s) str(s)

using namespace std;
int main()
{
#ifdef FOO_ENABLE
  cout << "FOO_ENABLE: ON" << endl;
#endif
  cout << "FOO_STRING1: " << xstr(FOO_STRING1) << endl;
  cout << "FOO_STRING2: " << xstr(FOO_STRING2) << endl;
  cout << "FOO_UNDEFINED: " << xstr(FOO_UNDEFINED) << endl;
}
