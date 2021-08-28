#include <iostream>

int main() {
  char c = 'a';
  char *p = &c;
  std::cout << "The value of the dereferenced pointer is: " << *p << std::endl;

  int x = 123;
  int *pe = &x;
  *pe = 456; // change the value of pointed-to object
  std::cout << "The value of x is: " << x << '\n';
}