#include <iostream>
#include <iso646.h>
#include <string>

int8_t choose(int8_t param);

struct look {
  int8_t race;
};


struct choice_of {
   std::string first;
   std::string second;
   std::string third;
   std::string fourth;
};

int main() {
  std::cout << ">>> ";
  std::cout << "Это выбор внешности надеюсь он будет не на ";
  std::cout << "70000 строчек";
  getchar(); // wait for ENTER

  std::cout << ">>> ";
  std::cout << "Давай перейдем к выбору внешности персонажа";
  getchar(); // wait for ENTER

  std::cout << ">>> ";
  std::cout << "Для выбора расы напиши число возле которого ";
  std::cout << "стоит твой выбор";
  getchar(); // wait for ENTER

  std::cout << ">>> ";
  std::cout << "1. Негр" << std::endl;
  std::cout << ">>> ";
  std::cout << "2. Сущность в виде гномика" << std::endl;
  std::cout << ">>> ";
  std::cout << "3. Негро эльф" << std::endl;
  std::cout << ">>> ";
  std::cout << "4. Негрованогеноромаруснил" << std::endl;
  getchar(); // wait for ENTER


  while(1);
  return 0;
}
