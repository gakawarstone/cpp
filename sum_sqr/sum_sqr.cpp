#include <iostream>
using namespace std;

bool check(int32_t n);
void sum_sqr(int32_t n);

int main() {
  int32_t n;
  cout << "Number: ";
  cin >> n;

  if (check(n)) {
    sum_sqr(n);
  } else {
    cout << "ERROR number not equal" << endl;
  }

  return 0;
}


bool check(int32_t n) {
  // check for n >= 0
  if (n <= 0) {
    return false;
  } else {
    return true;
  }
}


void sum_sqr(int32_t n) {
    // sum sqrs from 1 to n
    int32_t s = 0;

    for (int32_t i = 1; i <= n; ++i) {
      s += i*i;
    }

    cout << "Sum of sqrs: " << s << endl;
    return;
}
