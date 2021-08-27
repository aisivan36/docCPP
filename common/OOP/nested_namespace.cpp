#include <iostream>

namespace A {
namespace B {
void myfunction();
}
} // namespace A

void A::B::myfunction() {
  std::cout << "This greet from another world which" << std::endl;
}

int main() {
  A::B::myfunction();
  using namespace A::B;
  myfunction();
}