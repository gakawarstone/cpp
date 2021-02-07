#include <iostream>
#include <iso646.h>

int main () {
  int32_t n;

  std::cout << "Mass from 0 to ";
  std::cin >> n;

  int32_t len_A = n;
  int32_t A[len_A];

  A[0] = 1;
  A[1] = 1;

  for (int i = 2; i < len_A; ++i) { // fib numbers
    A[i] = A[i - 1] + A[i - 2];
  }

  for (int i = 0; i < len_A; ++i) { // print(A)
    std::cout << A[i] << ' ';
  }

  std::cout << std::endl;

  return 0;
}
