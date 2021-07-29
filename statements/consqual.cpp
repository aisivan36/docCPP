// Constant type Qualifier.

#include <iostream>

int main() {
  const int left = 902;
  const double d = 456.789;
  const std::string s = "What is up!";
  const int leave = left;

  std::cout << "Constant interger left value: " << left << std::endl;
  std::cout << "Constant double d value: " << d << std::endl;
  std::cout << "Constant string s is a: " << s << std::endl;
  std::cout << "Constant leave is a: " << leave << std::endl;
}