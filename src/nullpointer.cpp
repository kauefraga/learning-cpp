#include <iostream>

int main() {
  // null value is a special value that something has no value.
  // When a pointer is holding a null value, that pointer is not pointing to anything (null pointer).

  // nullptr is the keywork represents a null pointer literal
  // nullptrs are helpful when determining if an address was successfully assigned to a pointer

  // When using pointers, be careful that your code is not derefencing nullptr
  // or pointing to free memory
  // this will cause undefined behavior

  int* age_pointer = nullptr;
  int age = 23;

  age_pointer = &age;

  if (age_pointer == nullptr) {
    std::cout << "Error: address was not assigned" << '\n';
  }

  std::cout << "Address was assigned" << '\n';
  std::cout << *age_pointer << '\n';

  return 0;
}
