#include <iostream>

using namespace std;

int main() {
  const int32_t n = 10;
  int32_t bnm[n + 1];
  bnm[0] = 1;
  cout << bnm[0];

  for (int i = 0; i < n; ++i) {
    bnm[i + 1] = bnm[i] * (n - i)/(i + 1);
    cout << " " << bnm[i + 1];
  }

  return 0;
}
