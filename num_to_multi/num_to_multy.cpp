#include <iostream>

using namespace std;

int32_t d = 2;
int32_t n;


int main() {
  cin >> n;

  while (n != 1){
    if (n % d == 0){
      cout << d << " ";
      n /= d;
    }
    else{
      d++;
    }
  }

  cout << endl;

  return 0;
}
