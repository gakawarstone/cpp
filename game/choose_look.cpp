#include <iostream>
#include <iso646.h>
#include <string>

class Player {
  public:
    std::string race;
    std::string gender;
    std::string estate;
    std::string type;
};

struct choice_t {
   std::string first;
   std::string second;
   std::string third;
   std::string fourth;
};

std::string choose(choice_t ch); // declaration func


int main() {
  Player player;

  std::cout << ">>> ";
  std::cout << "Это выбор внешности надеюсь он будет не на ";
  std::cout << "70000 строчек";
  getchar(); // wait for ENTER

  std::cout << ">>> ";
  std::cout << "Давай перейдем к выбору внешности персонажа";
  getchar(); // wait for ENTER

  std::cout << ">>> ";
  std::cout << "Для выбора расы напиши число возле которого ";
  std::cout << "стоит твой выбор" << std::endl;

  choice_t race_ch;
  race_ch.first = "Негр";
  race_ch.second = "Сущность в виде гномика";
  race_ch.third = "Негроэльф";
  race_ch.fourth = "Негрованогеноромаруснил";
  player.race = choose(race_ch);
  std::cout << ">>> Ваш выбор: " << player.race << std::endl;
  getchar(); // wait for ENTER

  std::cout << ">>> ";
  std::cout << "Для выбора гендера напиши число возле которого ";
  std::cout << "стоит твой выбор" << std::endl;

  choice_t gender_ch;
  gender_ch.first = "Цисгендерный спермобак";
  gender_ch.second = "Боевой вертолет";
  gender_ch.third = "Коммунист";
  gender_ch.fourth = "Нога Шарифова";
  player.gender = choose(gender_ch);
  std::cout << ">>> Ваш выбор: " << player.gender << std::endl;
  getchar(); // wait for ENTER

  std::cout << ">>> ";
  std::cout << "Для выбора сословия напиши число возле которого ";
  std::cout << "стоит твой выбор" << std::endl;

  choice_t estate_ch;
  estate_ch.first = "Купец";
  estate_ch.second = "Дворянин";
  estate_ch.third = "Земледелец";
  estate_ch.fourth = "Жрец";
  player.estate = choose(estate_ch);
  std::cout << ">>> Ваш выбор: " << player.estate << std::endl;

  std::cout << ">>> ";
  std::cout << "Для выбора класса напиши число возле которого ";
  std::cout << "стоит твой выбор" << std::endl;

  choice_t type_ch;
  type_ch.first = "Воин";
  type_ch.second = "Маг";
  type_ch.third = "Разбойник";
  type_ch.fourth = "Вор";
  player.type = choose(type_ch);
  std::cout << ">>> Ваш выбор: " << player.type << std::endl;
  getchar(); // wait for ENTER

  std::cout << ">>> ";
  std::cout << "Ты закончил выбор внешности так подитожим" << '\n';
  std::cout << ">>> " << "Твоя раса: " << player.race << std::endl;
  std::cout << ">>> " << "Твой гендер: " << player.gender << std::endl;
  std::cout << ">>> " << "Твоё сословие: " << player.estate << std::endl;
  std::cout << ">>> " << "Твой класс: " << player.type << std::endl;

  getchar();

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
