#ifndef IOMANAGER_H
#define IOMANAGER_H

#include <map>
#include <string>

class Iomanager {
public:
  // constructors
  Iomanager(std::string name);
  void Add(int const &point);
  void Print();
  void Write();

private:
  std::string FileName;
  std::map<std::string, int> NamePoints;
};

#endif