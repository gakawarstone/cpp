#include <iostream>
#include <iso646.h>


int main () {
  int32_t a, b;

  std::cout << "Max div of numbers: ";
  std::cin >> a; // read a, a = input()
  std::cin >> b; // read b, b = input()

  int32_t div_max = 1;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0 and b % i == 0) { // if a,b div i without remains
      div_max = i;
    }
  }

  std::cout << div_max << std::endl;

  return 0;
}
