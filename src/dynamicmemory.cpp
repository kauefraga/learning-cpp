#include <iostream>

int main() {
  // Dynamic memory is memory that is allocated after the program is already compiled & running.
  // Use the 'new' operator to allocate memory in the heap rather than the stack

  // Useful when we don't know how much memory we will need.
  // Makes our programs more flexible, especially when accepting user input.

  int* p_age = nullptr;
  p_age = new int;

  *p_age = 21;

  std::cout << "Address: " << p_age << '\n';
  std::cout << "Value: " << *p_age << '\n';

  delete p_age;

  return 0;
}
