#include <iostream>

void bubble_sort(int array[], int size) {
  int temporary;

  // size - 1 because we don't need to compare the last element with the next one (that doesn't exist)
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        temporary = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temporary;
      }
    }
  }
}

int main() {
  int unordered_array[] = {10, 2, 2, 4, 1, 8, 3, 6 };
  int size = sizeof(unordered_array)/sizeof(int);

  bubble_sort(unordered_array, size);

  for (int element : unordered_array) {
    std::cout << element << ' ';
  }

  return 0;
}
