#include <iostream>
#include <iso646.h>


int32_t sum(int32_t n ) { // n - end of sum return sum from 0 to n
  int32_t sum = 0;

  for (int i = 0; i <= n; ++i) {
    sum += i;
  }

  return sum;
}


int main () {
  int32_t n;

  std::cout << "Sum from 0 to ";
  std::cin >> n;

  std::cout << "Sum: " << sum(n) << std::endl;

  return 0;
}
