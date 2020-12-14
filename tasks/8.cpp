#include <iostream>
#include <iso646.h>

const double SZH_IN_M = 1 / 2.16; // metrs in sazhen


int main() {
  double szh, metr;
  std::cout << "Sazhen: ";
  std::cin >> szh; // read sazhen

  metr = szh * SZH_IN_M;
  std::cout << "Metrs: " << metr << std::endl; // outp metrs

  return 0;
}
