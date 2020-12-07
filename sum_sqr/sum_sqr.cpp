#include <iostream>
using namespace std;


int main() {
  int32_t n, s, i;
  cout << "Number: ";
  cin >> n;

  for (i = 0; i <= n; ++i) {
    s += n*n;
  }

  cout << "Sum of sqrs: " << s << endl;
}
