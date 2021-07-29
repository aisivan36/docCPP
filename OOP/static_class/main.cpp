#include "MyClass.h"
#include <iostream>

void display_active_class() {
  std::cout << "Active Class: " << MyClass::get_num_myclass() << '\n';
}

int main() {
  display_active_class();
  MyClass obj{"Ivan"};
  display_active_class();
  std::cout << "============ Local Scope" << '\n';

  {
    MyClass obj1{"Boginski"};
    display_active_class();
    std::cout << "============ The End of Local Scope" << '\n';
  }
  display_active_class();

  std::cout << "============ Pointer" << '\n';
  MyClass *yourclass = new MyClass("YourClass", 100, 100);
  display_active_class();
  std::cout << "============ End Pointer" << '\n';
  delete yourclass;
  display_active_class();

  return 0;
}