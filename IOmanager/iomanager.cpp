#include "iomanager.h"
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// helper function for sorting
bool sortByVal(const std::pair<std::string, int> &a,
               const std::pair<std::string, int> &b) {
  return (a.second > b.second);
}

// constructor
Iomanager::Iomanager(std::string name) : FileName(name) {
  std::ifstream input(name);
  std::string People;
  int Points;
  if (!input) {
    std::ofstream(name, std::fstream::out);
    return;
  }
  while (input >> People) {
    input >> Points;
    NamePoints.insert({People, Points});
  }
}

void Iomanager::Add(int const &point) {
  std::map<std::string, int>::iterator it;
  std::string name;
  std::cout << "Please input your name..." << std::endl;
  while (std::cin >> name) {
    it = NamePoints.find("shit");
  }
}

void Iomanager::Print() {
  std::vector<std::pair<std::string, int>> vecForSort;

  // copy key-value pairs from the map to the vector
  std::map<std::string, int>::iterator it2;
  for (it2 = NamePoints.begin(); it2 != NamePoints.end(); it2++) {
    vecForSort.push_back(make_pair(it2->first, it2->second));
  }

  sort(vecForSort.begin(), vecForSort.end(), sortByVal);
  std::cout << " Rank " 
            << " | "
            << std::setw(12)
            << "name "
            << "| "
            << "Points" << std::endl;
  for (int i = 0; i < vecForSort.size(); i++) {
    std::cout << std::setw(6) << " "+std::to_string(i + 1)+" " << " | " << std::setw(11) << vecForSort[i].first
              << " | " << vecForSort[i].second << std::endl;
  }
}