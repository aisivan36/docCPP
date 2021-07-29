#include <iostream>
#include <string>

class MyClass {
  // Private memeber cannot access from outside class
  // private:
  //   std::string name;
  //   int age;
  //   int xp;

public:
  // Accessing member from main
  std::string name;
  int age;
  int xp;

  // Setter name
  void set_name(std::string name_value) { name = name_value; }
  //  Getter name that we define in main
  std::string get_name() { return name; }

  // The default Constructor
  MyClass() {
    name = "None";
    age = 24;
    xp = 5;
  }

  //   Overloaded Constructor
  // Declare Constructor here to move outside the class
  MyClass(std::string name_value, int age_value, int xp_value);

  // Overloaded Constructor inside the class
  //   MyClass(std::string name_value, int age_value, int xp_value) {
  //     name = name_value;
  //     age = age_value;
  //     xp = xp_value;
  //   }

  // Destructor
  ~MyClass(void); // Declare Destructor to move outside the class
  // ~MyClass(define) { std::cout << "The Destructor is called for: " << name <<
  // '\n'; }
};

// Define the Constructor outside the class, with initialization list class
MyClass::MyClass(std::string name_value, int age_value, int xp_value)
    : name{name_value}, age{age_value}, xp{xp_value} {}

// Define Destructor outside the class
MyClass::~MyClass(void) {
  std::cout << "The Destructor is called for: " << name << '\n';
}

int main() {
  // Call the default Constructor
  MyClass obj1;

  // Call and define the overloaded Constructor
  MyClass obj2{"Ivan", 25, 3};
  //   Access it here public member / if we used private member it cannot access
  //   it from here, always use public member
  std::cout << "Name: " << obj2.name << ", Age: " << obj2.age
            << " year old, xp: " << obj2.xp << std::endl;

  // Define a class object
  MyClass obj;
  //   Set a name object
  obj.set_name("Ivan Boginski");
  //   Get the name and print object name that we have set up above
  std::cout << obj.get_name() << '\n';
}