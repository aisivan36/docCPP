#ifndef _MyClass_A_
#define _MyClass_A_
#include <string>

class MyClass {
private:
  // You can't initialize {0} in this static instead you could in MyClass.cpp
  static int num_myclass;
  std::string name;
  int health;
  int xp;

public:
  std::string get_name() { return name; }
  int get_health() { return health; }
  int get_xp() { return xp; }
  MyClass(std::string name_value = "None", int health_value = 0,
          int xp_value = 0);
  // Copy Constructor
  MyClass(const MyClass &source);
  // Desctructor
  ~MyClass();

  static int get_num_myclass();
};

#endif // !_MyClass_A_