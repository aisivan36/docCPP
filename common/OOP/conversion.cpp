#include <iostream>

int main() {

  int x = 123;
  int *pint = x;
  void *pvoid = pint;
  int *pint2 = static_cast<int *>(pvoid); // Cast a void pointor to int Pointer
  std::cout << *pint2;                    // Dereference Pointer
}
