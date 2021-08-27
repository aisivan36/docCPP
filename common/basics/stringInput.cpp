#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cout << "You can enter a string: ";

  std::getline(std::cin, s);
  std::cout << "You entered: " << s << std::endl;
}