#include <iostream>
#include <iso646.h>


int32_t sum(int32_t n ) { // n - end of sum
  int32_t sum = 0; // return sum of odd num from 0 to n

  for (int i = 1; i <= n; i += 2) {
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
