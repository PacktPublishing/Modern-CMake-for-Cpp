#include <ftxui/component/screen_interactive.hpp>

#include "tui.h"

int main(int argc, char** argv) {
  ftxui::ScreenInteractive::FitComponent().Loop(getTui());
}
