#include "tui.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <ftxui/screen/screen.hpp>

using namespace ::ftxui;

TEST(ConsoleCalcTest, RunWorksWithDefaultValues) {
  auto component = getTui();
  auto document = component->Render();
  auto screen = Screen::Create(Dimension::Fit(document));
  Render(screen, document);
  auto output = screen.ToString();
  ASSERT_THAT(output, testing::HasSubstr("Sum: 102"));
}
