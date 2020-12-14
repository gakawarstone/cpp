#include <iostream>
#include <iso646.h>
#include <string>

struct look {
  int8_t race;
};

struct choice_t {
   std::string first;
   std::string second;
   std::string third;
   std::string fourth;
};

std::string choose(choice_t ch);


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

  choice_t race_ch;
  race_ch.first = "Негр";
  race_ch.second = "Сущность в виде гномика";
  race_ch.third = "Негро эльф";
  race_ch.fourth = "Негрованогеноромаруснил";
  std::cout << ">>> ";
  std::cout << "1. " << race_ch.first << std::endl;
  std::cout << ">>> ";
  std::cout << "2. " << race_ch.second << std::endl;
  std::cout << ">>> ";
  std::cout << "3. " << race_ch.third << std::endl;
  std::cout << ">>> ";
  std::cout << "4. " << race_ch.fourth << std::endl;
  getchar(); // wait for ENTER


  while(1);
  return 0;
}
