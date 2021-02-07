#include <iostream>
#include <iso646.h>


int main () {
  int32_t n;
  int32_t sum = 0;

  std::cout << "Sum odd numbers from 0 to ";
  std::cin >> n; // read n, n = input()

  for (int i = 1; i <= n; i += 2) {
    sum += i;
  }

  std::cout << "Sum = " << sum << std::endl;

  return 0;
}
