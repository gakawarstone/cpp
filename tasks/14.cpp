#include <iostream>
#include <iso646.h>


int main () {
  int32_t n;

  std::cout << "Mass from 0 to ";
  std::cin >> n;

  int32_t len_A = (n / 2) + 1;
  int32_t A[len_A];

  for (int i = 0, k = 0; i < len_A; ++i, k += 2) { // k even numbers
    A[i] = k;
  }

  for (int i = 0; i < len_A; ++i) { // print(A)
    std::cout << A[i] << ' ';
  }

  std::cout << std::endl;

  return 0;
}
