#ifndef GAMEMENU_H
#define GAMEMENU_H

class GameMenu {
public:
GameMenu(){};
~GameMenu(){};
void optionMenu();
int getOption();
private:
int gameOption;
};

#endif