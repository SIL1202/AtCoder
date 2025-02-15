#include <cstdlib>
#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cin >> input;

  std::cout << (input[0] - '0') * (input[2] - '0');
  return 0;
}
