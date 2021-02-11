#include <iostream>
#include <iso646.h>


int main () {
  int32_t n;
  int32_t sum = 0;

  std::cout << "Sum even numbers from 0 to ";
  std::cin >> n; // read n, n = input()

  int32_t i = 0;
  do {
    sum += i;
    i += 2;
  } while(i <= n);

  std::cout << "Sum = " << sum << std::endl;

  return 0;
}
