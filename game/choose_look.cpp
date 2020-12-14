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
  race_ch.third = "Негроэльф";
  race_ch.fourth = "Негрованогеноромаруснил";
  std::string pers_race = choose(race_ch);
  std::cout << ">>> " << pers_race << std::endl;
  getchar(); // wait for ENTER

  return 0;
}


std::string choose(choice_t ch) {
  int8_t n; // number from console
  std::string str_outp; // otput string

  std::cout << ">>> ";
  std::cout << "1. " << ch.first << std::endl;
  std::cout << ">>> ";
  std::cout << "2. " << ch.second << std::endl;
  std::cout << ">>> ";
  std::cout << "3. " << ch.third << std::endl;
  std::cout << ">>> ";
  std::cout << "4. " << ch.fourth << std::endl;
  std::cout << ">>> ";
  std::cin >> n;

  switch (n) {
    case '1':
        str_outp = ch.first;
        break;
    case '2':
        str_outp = ch.second;
        break;
    case '3':
        str_outp = ch.third;
        break;
    case '4':
        str_outp = ch.fourth;
        break;
    default:
        str_outp = ch.first;
        break;
  }

  return str_outp;
}
