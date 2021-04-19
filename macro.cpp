#include <iostream>

// Define a macro at here
#define LIMIT 7
#define AREA(l, b) (l + b)

int main() {

  // Then initialization a macro
  int a = 10, b = 5, area;
  area = AREA(a, b);

  std::cout << "Area of rectangle is: " << area << '\n';

  int val = 13;

  if (val != LIMIT) {
    std::cout << "the limit value is: " << LIMIT << std::endl;
  } else {
    std::cout << "The val is: " << val << '\n';
  }

  return 0;
}