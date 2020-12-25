#include <iostream>
#include <iso646.h>
#include <math.h>

int main () {
  int32_t n;

  std::cout << "Mass from 1 to ";
  std::cin >> n;

  int32_t len_A = n;
  int32_t A[len_A];

  for (int i = 0; i < len_A; ++i) { // sqr numbers
    A[i] = pow(i + 1, 2);
  }

  for (int i = 0; i < len_A; ++i) { // print(A)
    std::cout << A[i] << ' ';
  }

  std::cout << std::endl;

  return 0;
}
