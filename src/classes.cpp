#include <iostream>

class Student {
  private:
    int money = 0.0f; // for private attributes, we will need getters and setters
  public:
    std::string name;
    int age;
    double gpa;

  // constructor (needs to be named exactly like the class name)
  // you can overload constructor if you need to assign different parameters
  Student(std::string name, int age, double gpa) {
    this -> name = name;
    this -> age = age;
    this -> gpa = gpa;
  }

  void read() {
    std::cout << "The student " << name << " is reading..." << '\n';
  }

  // getter (returns the attribute type)
  int get_money() {
    return money;
  }

  // setter (doesn't return anything)
  void set_money(int money) {
    this -> money = money;
  }
};

// Inheritance
class Spongebob : public Student {
  public:
    std::string name = "Spongebob";
};

int main() {
  Student student("Patrick", 25, 3.4);

  student.read();

  student.set_money(1000);
  std::cout << student.get_money() << '\n';

  return 0;
}
