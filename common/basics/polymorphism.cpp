#include <iostream>
#include <memory>
class MyBaseClass {
public:
  //  This for invoking with pure function called abstact classes and cannot be
  //  instantiated. They can only use as base classses.
  virtual void dowork() = 0;

  // The default to define a virtual func
  // virtual void dowork()
  // {
  // std::cout << "Hello from a base class.\n";
  // }
};

class InheritClass : public MyBaseClass {
public:
  // If here is no dowrk function then it would invokes the base class function
  void dowork() { std::cout << "Hello from InheritClass.\n"; }
};

void simplePolymorphism();

int main() {
  MyBaseClass *o = new InheritClass;
  // With the arrow operator -> we invoke the appropriate version of
  // (Virtual)function
  o->dowork();
  delete o;

  simplePolymorphism();
}

/// Simple Poymorphism
class SimpleClass {
public:
  virtual void dowork() = 0;
  virtual ~SimpleClass() {}
};

/// derived it and marked as public
class DerivedSimpleClass : public SimpleClass {
public:
  void dowork() override {
    std::cout << "Do work from DerivedSimpleClass" << std::endl;
  }
};

void simplePolymorphism() {
  std::unique_ptr<SimpleClass> p = std::make_unique<DerivedSimpleClass>();
  p->dowork();
}