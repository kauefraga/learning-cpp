#include <iostream>

enum Day {
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday,
};

int main() {
  // enums are a user-defined data type that consists of paired named-integer constants.
  // It is greate if you have a set of potential options.

  Day today = sunday;

  switch (today) {
    case sunday:
      std::cout << "Today is sunday!" << '\n';
      break;
    case monday:
      std::cout << "Today is monday!" << '\n';
      break;
    case tuesday:
      std::cout << "Today is tuesday!" << '\n';
      break;
    case wednesday:
      std::cout << "Today is wednesday!" << '\n';
      break;
    case thursday:
      std::cout << "Today is thursday!" << '\n';
      break;
    case friday:
      std::cout << "Today is friday!" << '\n';
      break;
    case saturday:
      std::cout << "Today is saturday!" << '\n';
      break;
  }

  return 0;
}
