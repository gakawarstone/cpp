#include <iostream>
#include <iso646.h>
#include <math.h>

int main () {
  int32_t n;

  std::cout << "Mass from 0 to ";
  std::cin >> n;

  int32_t len_A = n + 1;
  int32_t A[len_A];

  for (int i = 0; i < len_A; i += 2) { // numbers
    A[i] = i;
  }

  for (int i = 1; i < len_A; i += 2) { // sqr numbers
    A[i] = pow(i, 2);
  }

  for (int i = 0; i < len_A; ++i) { // print(A)
    std::cout << A[i] << ' ';
  }

  std::cout << std::endl;

  return 0;
}
