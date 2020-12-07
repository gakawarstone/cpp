#include <iostream>
using namespace std;

int main() {
  const int16_t ft_in_mile = 5280; // foots in kilometr
  const double km_in_mile = 1.609344; // kilometrs in mile
  int32_t dmile, dft, dkm, dm; //distance
  cout << "Distance in mile and foots." << endl;
  cout << "Miles: ";
  cin >> dmile;
  cout << "Foots: ";
  cin >> dft;
  double dist_mile = dmile + (double) dft/ft_in_mile;
  double dist_km = dist_mile * km_in_mile;
  dkm = (int) dist_km;
  dm = (int) ((dist_km - dkm) * 1000);
  cout << "Distance in kilometrs and metrs." << endl;
  cout << "Kilometrs: " << dkm << endl;
  cout << "Metrs: " << dm << endl;
  return 0;
}
