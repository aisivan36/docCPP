#include <iostream>

int main() {
  char c = 'a';
  char *p = &c;
  *p = 'b'; // change the value of pointed-to object
  std::cout << "The pointer dereferenced is: " << *p << std::endl;
}