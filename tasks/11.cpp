#include <iostream>
#include <iso646.h>


int main () {
  double km_h, m_s; // km in hour metr in second (V)

  std::cout << "Metrs in second: ";
  std::cin >> m_s;

  km_h = m_s * 3600 / 1000;

  std::cout << "Km in hour: " << km_h;
  std::cout << std::endl;

  return 0;
}
