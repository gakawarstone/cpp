#include <iostream>
using namespace std;

int main() {
  const double km_in_mile = 1.609344;
  double dist_mile, dist_km;
  cout << "Distance in mile: ";
  cin >> dist_mile;
  dist_km = dist_mile * km_in_mile;
  cout << "Distance in km: " << dist_km << endl;
  return 0;
}
