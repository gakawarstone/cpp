#include <iostream>
#include <math.h>
using namespace std;

void show_mass(int32_t *a);
bool simple(int32_t n);
void simple_eragosphen(int32_t n);


int main() {
  int32_t n;
  cin >> n;
  int32_t *A;
  cout << simple(n) << endl;
  simple_eragosphen(n);
  return 0;
}


void show_mass(int32_t *A, int32_t n) {
  for (int i = 0; i < n; ++i) {
    cout << A[i] << ' ';
  }

  cout << endl;
}


bool simple(int32_t n) { // test number for simple flag method
  bool flag = true;
  for (int d = 2; d < sqrt(n); ++d) {
    if (n % d == 0) {
      flag = false;
    }
  }

  return flag;
}


void simple_eragosphen(int32_t n) {
  int32_t A[n];
  for (int i = 0; i < n; ++i) {
    A[i] = i + 1;
  }

  for (int i = 2; i < sqrt(n); ++i) {
    for (int k = 2*i - 1; k < n; k += i) {
      A[k] = 0;
    }
  }

  show_mass(A, n);
}
