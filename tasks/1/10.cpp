#include <iostream>
#include <iso646.h>


int main () {
  double km_h, m_s; // km in hour metr in second (V)

  std::cout << "Km in hour: ";
  std::cin >> km_h;

  m_s = km_h * 1000 / 3600;

  std::cout << "Metrs in second: " << m_s;
  std::cout << std::endl;

  return 0;
}
