#include <iostream>

void constRef();

int main() {
  int x = 123;
  int &y = x;
  x = 456; /// Both x and y hold the value of 456
  y = 789; /// Both x and y now hold the value of 789
  constRef();
}

/// This is a const referenced
void constRef() {
  int x = 123;
  const int &y = x; /// const reference
  x = 456;          // now both x and y are holding the value of 456
  std::cout << "the value is x: " << x << " and y is: " << y << std::endl;
}