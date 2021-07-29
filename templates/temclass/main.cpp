#include "array.h"
#include <iostream>

int main() {
  array<int> intArray(12);
  array<double> doubleArray(12);

  for (int count{0}; count < intArray.getLength(); ++count) {
    intArray[count] = count;
    doubleArray[count] = count + 1.5;
  }

  for (int count{intArray.getLength() - 1}; count >= 0; --count) {
    std::cout << intArray[count] << '\t' << doubleArray[count] << '\n';
  }

  return 0;
}