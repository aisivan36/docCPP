
#include <iostream>
#include <string>

class Base {
public:
  // If did not use virtual then base class is shown
  virtual std::string getName() const {
    return "Base";
  } // note addition of virtual keyword
};

class Derived : public Base {
public:
  // Virtual is overridden the Base class
  virtual std::string getName() const { return "Derived"; }
};
class Another : public Base {
public:
  // Virtual is overridden the Base class
  virtual std::string getName() const { return "Another"; }
};

class Theother : public Base {
public:
  // Virtual is overridden the Base class
  virtual std::string getName() const { return "The Other"; }
};

int main() {
  Another derived;
  Base &rBase{derived};
  std::cout << "rBase is a " << rBase.getName() << '\n';

  return 0;
}