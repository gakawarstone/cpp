#include <iostream>
#include <iso646.h>


struct pair_t {
  int32_t x;
  int32_t y;
};

int main() {
  int32_t n; // init how many numbers to write
  pair_t bnm_pair; // init biniminal k pair
  bnm_pair.x = 1; // first biniominal k

  std::cin >> n; // read n
  std::cout << bnm_pair.x; // outp first number

  for (int i = 0; i < n; ++i) {
    bnm_pair.y = bnm_pair.x * (n - i)/(i + 1);
    std::cout << " " << bnm_pair.y;
    bnm_pair.x = bnm_pair.y; // y displace x
  }

  std::cout << std::endl;

  return 0;
}
