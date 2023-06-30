#include <iostream>

void swap(std::string &x, std::string &y) {
  std::string temporary;

  temporary = x;
  x = y;
  y = temporary;
}

int main() {
  // memory address is a location in memory where data is stored
  // a memory address can be accessed with & (address-of operator)

  std::string name = "test";
  int age = 21;
  bool student = true;

  std::cout << &name << '\n';
  std::cout << &age << '\n';
  std::cout << &student << '\n';

  /*
    string 0xe9b7ffc70 = 62738398320
    int 0xe9b7ffc6c = 62738398316 (takes 4 bytes)
    bool 0xe9b7ffc6b = 62738398315

    62738398320 - 62738398316 = 4 bytes :)
  */

  // pass by value x pass by reference
  std::string x = "Hiiii";
  std::string y = "Byeee";

  swap(x, y);

  std::cout << "X: " << x << '\n';
  std::cout << "Y: " << y << '\n';

  // when you pass by value the values will be copied

  // See the pointers file

  return 0;
}
