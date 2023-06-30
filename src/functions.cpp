#include <iostream>

void printInfo(const std::string& name) {
  std::cout << name << '\n';
}

int main() {
  // const parameter
  std::string name = "test";

  printInfo(name);

  return 0;
}
