#include <iostream>

int main() {
  int start = 10;
  int end = 20;

  /// While Loop - evaluate first
  int i = start;
  while (i < end) {
    std::cout << "While loop : " << i << std::endl;
    i++;
  }

  std::cout << "============";

  /// Do While Loop
  int o = start;

  do { // do this whateve the value is
    std::cout << "DO While Loop : " << o << std::endl;
    o++;
  } while (o < end); /// evaluate this to loop, if value does not match then
                     /// it stopped looping.

  return 0;
}