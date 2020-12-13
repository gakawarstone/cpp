#include <iostream>
#include <iso646.h>


const int16_t FT_IN_MILE = 5280; // foots in kilometr
const double KM_IN_MILE = 1.609344; // kilometrs in mile


struct pair_t {
  int32_t x;
  int32_t y;
};


int main() {
  pair_t km_pair;
  pair_t mile_pair;

  std::cout << "Kilometrs: ";
  std::cin >> km_pair.x;
  std::cout << "Metrs: ";
  std::cin >> km_pair.y;

  double dist_km = km_pair.x + (double)km_pair.y / 1000;
  double dist_mile = dist_km / KM_IN_MILE;


  mile_pair.x = (int)dist_mile;
  mile_pair.y = (int)((dist_mile - mile_pair.x) * FT_IN_MILE);

  std::cout << "Miles: ";
  std::cout << mile_pair.x << std::endl;
  std::cout << "Foots: ";
  std::cout << mile_pair.y << std::endl;

  return 0;
}
