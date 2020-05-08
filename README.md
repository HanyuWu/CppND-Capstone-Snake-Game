# CPPND: Capstone Snake Game

This is the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## File and Class Structure

There are 6 classes in total for the game to be run successfully.<br>

| class name | Purpose                                                                                                 |
| ---------- | ------------------------------------------------------------------------------------------------------- |
| Controller | Interact with users, let users use keyboard to control the snake in the game.                           |
| Game       | Game class stores the state in the game, the function object **run** has the game run in loops til end. |
| Render     | render the game to the screen.                                                                          |
| Snake      | contains attributes to keep track of the Snake speed, size, and location.                               |
| Iomanager  | Read,Write and print the history record for players.                                                    |
| GameMenu   | Implement a menu before the game starts.                                                                |

Additionally, a **record.txt** file in the document [data](./data) is for saving and loading the game record (palyers' names and points they get).<br>

After running `./SnakeGame`, you have 3 options to input, which are 1, 2 or 3 indictating start, ranking, or quit respectively. When you end a round, you will be asked to input your name for recording your points. If you want to see your ranking, you can input 2 in the menu, and the ranking will be displayed in order.<br>

## Rubric Points 

1. The project demonstrates an understanding of C++ functions and control structures. I used a lot of control structures in the **Iomanager.cpp** and I add a while-loop in the **main.cpp** to make the game run more reasonably. for example, line 20-27 of **Iomanager.cpp**, I used if-statements to check if the **record.txt** exists, if not, then the program will create one. A while-loop to write the data from the **record.txt** to the map member variable **NamePoints**. I defined useful function obejcts too. For example, the **Iomanager::Print** function is defined by me to display the ranking in order.
   
2. The project reads data from a file and process the data, or the program writes data to a file. In the **Iomanager.cpp**, the constructor can read the information from the **record.txt** (line 17-28). The **Iomanager::Write** (line 80-86) is defied to write the ranking informatio into the  **record.txt**.
   
3. The project accepts user input and processes the input. The **GameMenu class** is defined to accept user input and process the input. In line 7-22 of **GameMenu.cpp**, these codes let the player choose to start, see ranking or quit the game. These codes can check if the players type in the expected characters, too.
   
4. The project uses Object Oriented Programming techniques. The **GameMenu class** and **Iomanager class** are defined to improve the structure of the program.
   
5. Classes use appropriate access specifiers for class members. In line 26 of the **GameMenu.cpp**, a getter is defined to access the private member of the **GameMenu class**, and in line 56-78 of the **Iomanager.cpp**, a setter is defined to modify the private member of the **Iomanager class**.
   
6. Class constructors utilize member initialization lists. In Line 16 of the **Iomanager.cpp**, I implemented the initialization list of the **Iomanager class**.
