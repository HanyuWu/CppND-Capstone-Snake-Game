#include <iostream>
#include "iomanager.h"
#include <string>

int main(){
    std::string name = "./data/record.txt";
    Iomanager ma(name);
    ma.Print();
    return 0;
}