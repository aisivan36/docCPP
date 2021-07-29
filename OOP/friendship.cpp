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

class AnotherClass;

class TheClass {
public:
  void TheFuc(AnotherClass &); // function ref
};

class AnotherClass {
private:
  int b;

public:
  AnotherClass() { b = 13; }
  friend void TheClass::TheFuc(AnotherClass &x); // Friend function
};

void TheClass::TheFuc(AnotherClass &x) { std::cout << "B::b = " << x.b; }

void anotherfunc() {
  TheClass obj;
  AnotherClass obj2;
  // Initialize obj2 into obj
  obj.TheFuc(obj2);
}

int main() {
  anotherfunc();

  std::cout << "\n=========" << '\n';

  // Define MyClas to obj
  MyClass obj;
  //   Define YourClass to obj2
  YourClass obj2;
  //   Initialize obj2 into obj
  obj2.Func(obj);

  return 0;
}
