#include <iostream>

class MyClass {
private:
  int x;
  double d;

public:
  void Destruct();
  MyClass(int xx, double dd) : x{xx}, d{dd} {}
  MyClass &operator+=(const MyClass &rhs) {
    this->x += rhs.x;
    this->d += rhs.d;
    return *this;
  }
  friend MyClass operator+(MyClass lhs, const MyClass &rhs) {
    lhs += rhs;
    return lhs;
  }
};

void MyClass::Destruct() { std::cout << "Destruct"; }

void tester();

int main() {
  tester();

  MyClass myobject{1, 1.0};
  MyClass mysecondobject{2, 2.0};
  MyClass theob = myobject + mysecondobject;
  // To access a void func
  // has to declare the given value of the argument int and double.
  MyClass o{1, 2.2};
  o.Destruct();

  std::cout << "used the overloaded += operator\n" << std::endl;
}

class YouClass {
public:
  void myMethod();
};

class anotherClass {
public:
  int speed(int maxSpeed);
  std::string unit(std::string measure);
};

int anotherClass::speed(int maxSpeed) { return maxSpeed; }

std::string anotherClass::unit(std::string measure) { return measure; }

void YouClass::myMethod() { std::cout << " Succed\n"; }

void tester() {
  anotherClass meas;
  anotherClass Car;
  std::cout << Car.speed(70) << meas.unit(" Kmh");

  YouClass myclass;
  myclass.myMethod();
}

// class CClasseS
// {
//   private:
//   int *p;
//   public:
//   CClasseS()
//   : p{ new int{123}}
//   {
//     std::cout << "Create a Pointer in the constructor.\n";
//   }

//   ~CClasseS()
//   {
//     delete p;
//     std::cout << "The constructor is deleted.\n";
//   }
// };

// void Destructor() {
// CClasseS a;
// }