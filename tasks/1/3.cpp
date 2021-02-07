#include <iostream>

int main() {
  int32_t n;
  std::cin >> n;

  for (int i = 0; i <= n; ++i) {
    std::cout << 4*i + 3 << ' ';
  }

  std::cout << std::endl;
  return 0;
}
