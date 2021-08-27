#include <iostream>

namespace ShortCase {
void First() { std::cout << "Inside the shortcase" << '\n'; }
} // namespace ShortCase

namespace ShortCase {
namespace Anotherone {
void NestedNameSpace() { std::cout << "Inside the nested namespace" << '\n'; }
} // namespace Anotherone
} // namespace ShortCase

int main() {
  using namespace ShortCase::Anotherone;
  ShortCase::First();

  NestedNameSpace();
}
