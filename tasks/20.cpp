#include <iostream>
#include <iso646.h>


int main () {
  int32_t n;
  int32_t len_A = 100;
  int32_t A[len_A];
  int32_t top = 0; // index fullness of mass

  while (1) { // read from console untill read not = 0
    std::cin >> n;

    if (not n) { // check if read == 0
      break;
    }

    A[top++] = n; // .append()
  }

  for (int i = 0; i < top; ++i) { // print(A)
    std::cout << A[i] << ' ';
  }

  std::cout << std::endl;

  return 0;
}
