#include <string>

int main() {
  int i = 0;

  while (true) {
    i += 1;

    if (i == 10000) {
      return i;
    }
  }

  i = 0;

  do {
    i += 1;
    return i;
  } while (i < 10000);

  for (i = 0; i < 10000; i++) {
    if (i == 10000) {
      return i;
    }
  }

  return 0;
}
