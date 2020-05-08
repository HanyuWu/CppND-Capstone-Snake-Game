#include "GameMenu.h"
#include <iomanip>
#include <iostream>
#include <string>

void GameMenu::optionMenu() {
  int options;
  std::cout << "please enter integer 1 to 3:\n\n"
            << "1 for Start\n"
            << "2 for Rankings\n"
            << "3 for Quit Game\n"
            << std::endl;
  while (std::cin >> options) {
    if (options == 1 || options == 2 || options == 3) {
      break;
    }
    std::cout << "Please enter 1, 2 or 3!\n" << std::endl;
  }
  if (std::cin.fail()) {
    options = 3;
    std::cerr << "Wrong Input" << std::endl;
  }
  gameOption = std::move(options);
};

int GameMenu::getOption() { return gameOption; }
