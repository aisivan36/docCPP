// A return statement

#include <iostream>

int weirdnum(int x);

int main() { std::cout << "The weirdnum of a function is: " << weirdnum(29); }

int weirdnum(int x) {
  if (x >= 30) {
    return x;
  } else {
    std::cout << "Sorry there is no value of the weidnum!";
  }
  return 0;
}