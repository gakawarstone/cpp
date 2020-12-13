#include <iostream>
#include <iso646.h>

const double KM_IN_MILE = 1.609344; // kilometrs in mile


int main() {
  int32_t km, mil;
  std::cout << "Kilometrs: ";
  std::cin >> km; // read kilometrs

  mil = km * KM_IN_MILE;
  std::cout << "Miles: " << mil << std::endl; // outp miles

  return 0;
}
