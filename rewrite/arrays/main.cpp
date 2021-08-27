#include <iostream>

int main() {
  // this array count from [1]
  int intArr[5] = {10, 9, 8, 7, 6};
  char charArr[5] = {'a', 'b', 'c', 'd', 'e'};

  // We access it count from '0'
  intArr[2] = 18; // change the value of 8
  charArr[0] = 'q';
  std::cout << "The intArray is: " << intArr[2] << std::endl;
}