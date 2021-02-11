#include <iostream>
#include <iso646.h>


int main () {
  int32_t n;

  std::cout << "Divisors of number: ";
  std::cin >> n; // read n, n = input()

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) { // if n div i without remains
      std::cout << i << ' ';
    }
  }

  std::cout << std::endl;

  return 0;
}
