#include <iostream>
using namespace std;

double get_mile();
double mile_to_km(double d);


int main() {
  double dist_mile = get_mile();
  double dist_km = mile_to_km(dist_mile);
  cout << "Distance in km: " << dist_km << endl;
  return 0;
}


double get_mile() {
  double d;
  cout << "Distance in mile: ";
  cin >> d;
  return d;
}


double mile_to_km(double d) {
  const double km_in_mile = 1.609344;
  return d * km_in_mile;
}
