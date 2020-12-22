#include <iostream>
#include <iso646.h>
#include <string>

using std::string;

const uint16_t GOLD_PIECES = 900;


int main() {
  uint8_t adventures, slaves, masters;
  string boss;

  std::cout << "Welcome to gay party..." << std::endl;
  std::cout << "You can personalize yor party" << std::endl;
  std::cout << "Enter a number: ";
  std::cin >> adventures;
  std::cout << "Enter number smaller: ";
  std::cin >> masters;
  slaves = adventures - masters;
  std::cout << "Enter your last name: ";
  std::cin >> boss;

  return 0;
}
