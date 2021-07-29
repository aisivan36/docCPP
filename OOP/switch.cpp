#include <iostream>

int main() {
  int x = 4;
  switch (x) {
  case 1:
    std::cout << "The Vlaue is equal to 1." << std::endl;
  case 2:
    std::cout << "The value is equal to 2." << std::endl;
  case 3:
    std::cout << "The value is equal to 3" << std::endl;
  case 4:
    std::cout << "The value is equal to 4" << std::endl;
  default:
    std::cout << "The value is not inside the [1..4] range." << std::endl;
    break;
  }
}