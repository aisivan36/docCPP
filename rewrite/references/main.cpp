#include <iostream>

int main() {

  int x = 123;
  int &y = x;

  x = 456;

  y = 789;
}
