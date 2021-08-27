#include <iostream>

int main() {
  int arr[5] = {10, 20, 30, 40, 50};
  arr[0] = 100; // Here we changed the index 0 which is 10 to 100.

  std::cout << arr[1] + arr[2] + arr[0];
}