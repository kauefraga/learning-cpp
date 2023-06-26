#include <iostream>
#include "./namespaces.cpp"
#include "./constants.cpp"

void screen_size() {
  std::cout << "The screen size is " << WIDTH << "x" << HEIGHT << '\n';
  std::cout << "The center is" << WIDTH / 2 << "x" << HEIGHT / 2 << '\n';
}

/// @brief Computes the area of a circle with the given radius.
/// @param radius is the radius of the circle.
/// @return the area of a circle.
double circle_area(int radius) {
  return PI * radius * radius;
}

int main() {
  std::cout << "Hello, Aron!" << '\n';

  double area = circle_area(5);
  double core_area = circle_area(core::radius);

  std::cout << "The area of the circle is " << area << "m²" << '\n';
  std::cout << "The core area of the circle is " << core_area << "m²" << '\n';

  std::cout << "Store these areas will consume " << sizeof(core_area) + sizeof(area) << " bytes of memory." << '\n';
  std::cout << "-------------------------------------" << '\n';

  return 0;
}
