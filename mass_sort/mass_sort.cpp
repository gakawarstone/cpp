#include <iostream>
#include <iso646.h>


int main() {
  int32_t A[100];
  int32_t x;
  int32_t top = 0; // index fullness of mass

  while (1) { // read from console untill read not = 0
    std::cin >> x;

    if (not x) { // check if read == 0
      break;
    }

    A[top++] = x; // .append()
  }

  for (int i = 0; i < top; ++i) { // print mass
    std::cout << A[i] << ' ';
  }

  std::cout << std::endl;

  bool is_sorted = false;

  while (not is_sorted) { // bubble sort
    is_sorted = true;

    for (int i = 0; i < top - 1; ++i) {
      if (A[i] > A[i + 1]) {
        int32_t tmp;
        tmp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = tmp;
        is_sorted = false;
      }
    }
  }

  for (int i = 0; i < top; ++i) { // print mass
    std::cout << A[i] << ' ';
  }

  std::cout << std::endl;

  return 0;
}
