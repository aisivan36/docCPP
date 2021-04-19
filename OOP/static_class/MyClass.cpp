#include "MyClass.h"
#include <string>

// Right you can initialize it in here {0}
int MyClass::num_myclass{0};

MyClass::MyClass(std::string name_value, int health_value, int xp_value)
    : name{name_value}, health(health_value), xp(xp_value) {
  ++num_myclass;
}

// Delegating Class
MyClass::MyClass(const MyClass &source)
    : MyClass{source.name, source.health, source.xp} {}

// Destructor
MyClass::~MyClass() { --num_myclass; }

int MyClass::get_num_myclass() { return num_myclass; }