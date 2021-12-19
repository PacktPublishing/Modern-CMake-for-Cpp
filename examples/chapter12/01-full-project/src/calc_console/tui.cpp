#include "tui.h"

#include <ftxui/dom/elements.hpp>

#include "buildinfo.h"
#include "calc/calc.h"

using namespace ftxui;
using namespace std;

string a{"12"}, b{"90"};
auto input_a = Input(&a, "");
auto input_b = Input(&b, "");
auto component = Container::Vertical({input_a, input_b});

Component getTui() {
  return Renderer(component, [&] {
    auto sum = Calc::Sum(stoi(a), stoi(b));
    return vbox({
               text("CalcConsole " + BuildInfo::Version),
               text("Built: " + BuildInfo::Timestamp),
               text("SHA: " + BuildInfo::CommitSHA),
               separator(),
               input_a->Render(),
               input_b->Render(),
               separator(),
               text("Sum: " + to_string(sum)),
           }) |
           border;
  });
}
