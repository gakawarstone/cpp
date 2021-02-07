#include <iostream>
#include <iso646.h>


struct pair_t {
  int32_t x;
  int32_t y;
};

int main() {
  pair_t fib_pair; // init fibonachi first two numbers
  fib_pair.x = 1;
  fib_pair.y = 1;
  int32_t n; // init how many numbers write

  std::cin >> n; // read n

  std::cout << fib_pair.x << ' '; // outp first two numbers
  std::cout << fib_pair.y << ' ';

  for (int i = 2; i < n; ++i) {
    int32_t tmp;
    std::cout << fib_pair.x + fib_pair.y << ' ';
    tmp = fib_pair.x; // remember old x
    fib_pair.x = fib_pair.y; // y displace x
    fib_pair.y = tmp + fib_pair.y; // y = sum(x, y)
  }

  std::cout << std::endl;

  return 0;
}
