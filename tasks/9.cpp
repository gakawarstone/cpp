#include <iostream>
#include <iso646.h>

const double M_IN_SZH = 2.16; // metrs in sazhen


int main() {
  int32_t szh, arsh; // sazhen, arshin
  int32_t metr, smetr; // metr, santimetr
  double szh_d; // sazhen double

  std::cout << "Sazhens: ";
  std::cin >> szh;
  std::cout << "Arshins: ";
  std::cin >> arsh;


  szh_d = szh + (double)arsh / 3;
  metr = szh_d * M_IN_SZH;
  smetr = ((szh_d * M_IN_SZH) - metr) * 100;

  std::cout << "Metrs: " << metr << std::endl;
  std::cout << "Santimetrs: " << smetr << std::endl;

  return 0;
}
