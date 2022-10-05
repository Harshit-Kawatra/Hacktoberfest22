#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;
int processArray(std::vector<int> &array) {
  for(int i = 0; i < array.size(); i++) {
}
  return 0;
}

int main(void) {
  std::vector<int> array;
  int val;
  while (std::cin >> val) {
    if (val < 0) break;
    array.push_back(val);
  }
  std::cout << processArray(array) << std::endl;
  return 0;
}