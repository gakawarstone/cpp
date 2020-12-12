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

}
