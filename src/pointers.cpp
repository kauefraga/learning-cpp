#include <iostream>

int main() {
  // pointers is a variable that stores a memory address of another variable
  //          sometimes it's easier to work with an address

  // & address-of operator
  // * dereference operator

  int age = 1;

  int* p_age = &age;

  std::cout << "Age address: " << &age << '\n';
  std::cout << "Age value: " << age << '\n';
  std::cout << "Age pointer: " << p_age << " (should be the same as age address)" << '\n';
  std::cout << "Age pointer value: " << *p_age << " (should be the same as age value)" << '\n';

  std::string free_pizzas[3] = { "pizza1", "pizza2", "pizza3" };

  std::string* p_free_pizzas = free_pizzas;

  std::cout << "free_pizzas: " << *p_free_pizzas << '\n';

  return 0;
}
