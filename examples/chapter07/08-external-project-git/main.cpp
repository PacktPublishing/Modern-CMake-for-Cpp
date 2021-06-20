#include <string>
#include <iostream>
#include "yaml-cpp/yaml.h"

using namespace std;
int main() {
  string name = "Guest";

  YAML::Node config = YAML::LoadFile("config.yaml");
  if (config["name"])
    name = config["name"].as<string>();

  cout << "Welcome " << name << endl;
  return 0;
}
