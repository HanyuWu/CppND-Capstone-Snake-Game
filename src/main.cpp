#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "GameMenu.h"
#include "Iomanager.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  GameMenu gm;
  Iomanager ioManager("../data/record.txt");
  while(true){
    gm.optionMenu();
    int gameStatus = gm.getOption();
    switch(gameStatus){
      case 1:{
        std::cout<<std::endl;
        break;
      }
      case 2:{
        ioManager.Print();
        continue;
        break;
      }
      case 3:{
        std::cout << "Game is terminated!"<<std::endl;
        return 0;
        break;
      }
      default:{
        std::cerr << "Wrong Input\n"<<"Game is terminated!"<<std::endl;
        return 1;
        break;
      }
    }
    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kGridWidth, kGridHeight);
    game.Run(controller, renderer, kMsPerFrame);
    std::cout << "Score: " << game.GetScore() << "\n";
    std::cout << "Size: " << game.GetSize() << "\n\n";
    ioManager.Add(game.GetScore());
    ioManager.Write();
    }
  return 0;
}