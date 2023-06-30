#include <iostream>

class Student {
  public:
    std::string name;
    int age;
    double gpa;

  // constructor (needs to be named exactly like the class name)
  Student(std::string name, int age, double gpa) {
    this -> name = name;
    this -> age = age;
    this -> gpa = gpa;
  }

  void read() {
    std::cout << "The student " << name << " is reading..." << '\n';
  }
};

int main() {
  Student student("Patrick", 25, 3.4);

  student.read();

  return 0;
}
