#include <iostream>
#include <iso646.h>
#include <cmath>


int main() {
  double q = 1, sum = 0; // q - add k, sum = exp(x)
  const int N = 100; // quality of exp
  double x; // read number, exp(x)
  int k = 0; // index

  std::cin >> x; // read arg

  do { // exp(x)
    sum += q;
    k++;
    q *= (x / k);
  } while(k <= N);

  std::cout << sum << " : " << exp(x); // compare
}
