#include <iostream>
#include <string>

class MyClass {
private:
  std::string name;
  // int height;
  // int weight;

public:
  void set_name(std::string name_value) { name = name_value; }

  // Overloaded Constructor
  MyClass() { std::cout << "First Class is called " << std::endl; }

  MyClass(std::string name) {
    std::cout << "Second Class is called " << std::endl;
  }

  MyClass(std::string name, int height, int weight) {
    std::cout << "Third Class is called " << std::endl;
  }

  ~MyClass() {
    // Destructor is called after the Constructor is done
    std::cout << "The Destructor For " << name << " is called " << std::endl;
  }
};

void FirstCaller() {
  MyClass obj;
  obj.set_name("Ivan");
}

void SecondCaller() {
  // The Destructor is called after done with this scope
  MyClass obj1;
  obj1.set_name("FIrst Class");

  MyClass obj2{"Second Class"};
  obj2.set_name("Second Class");

  MyClass obj3{"Third Class", 197, 70};
  obj3.set_name("Third Class");
}

// void ClassDestructor() {

// }

int main() {
  FirstCaller();
  SecondCaller();

  std::cout << "================================" << std::endl;
  std::cout << "// Pointer, Class Destructor();" << std::endl;
  MyClass *Destruct = new MyClass;
  Destruct->set_name("First Pointer");

  MyClass *Second = new MyClass("Second Pointer");
  Second->set_name("Second Pointer");

  MyClass *HigherDest = new MyClass("Third Pointer", 1000, 2000);
  HigherDest->set_name("Third Pointer");

  delete Destruct;
  delete Second;
  delete HigherDest;

  // Optional return 0, The compiler includes automatically
  // the return value is useful to check the status when the application
  // exit. return 0 means no error.
  return 0;
}