#include <iostream>
#include <ostream>
class MyClass {
private:
  int a;

public:
  MyClass() { a = 0; }
  friend class YourClass; // Friend Class
};

class YourClass {
private:
  int b{20};

public:
  void Func(MyClass &ref) {
    // Since B is friend of A, it can access
    // private members of A
    std::cout << "A::a=" << ref.a << ", B is: " << b << std::endl;
  }
};

int main() {
  // Define MyClas to obj
  MyClass obj;
  //   Define YourClass to obj2
  YourClass obj2;
  //   Initialize obj2 into obj
  obj2.Func(obj);
  return 0;
}
