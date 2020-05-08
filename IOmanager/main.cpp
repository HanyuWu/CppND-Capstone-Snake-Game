#include "iomanager.h"
#include <iostream>
#include <string>

int main() {
  std::string name = "./data/record.txt";
  Iomanager ma(name);
  ma.Print();
  int points = 10;
  ma.Add(points);
  ma.Print();
  ma.Write();
  return 0;
}