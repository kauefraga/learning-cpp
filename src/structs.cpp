#include <iostream>

struct Student {
  std::string name;
  double gpa;
  bool enrolled = true;
};

int main() {

  Student student1;
  student1.name = "Spongebob";
  student1.gpa = 3.2;

  std::cout << sizeof(student1) << '\n';

  return 0;
}
