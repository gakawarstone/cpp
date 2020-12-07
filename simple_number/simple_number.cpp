#include <iostream>
#include <math.h>
using namespace std;

int32_t n;
bool flag = true;

int main() {
  cin >> n;
  for (int d = 2; d < sqrt(n); ++d) {
    if (n % d == 0) {
      flag = false;
    }
  }

  cout << flag << endl;
  return 0;
}
