// #include "max1.hpp"
// #include <iostream>
// #include <string>

// int main() {
//   int i = 43;
//   std::cout << "Max(7,i): " << ::max(7, i) << '\n';

//   double f1 = 3.4;
//   double f2 = -6.7;
//   std::cout << "max(f1,f2): " << ::max(f1, f2) << '\n';

//   std::string s1 = "mathematics";
//   std::string s2 = "math";

//   std::cout << "max(s1,s2): " << ::max(s1, s2) << '\n';
// }

#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

void lambda() {
  std::vector<int> v = {1, 2, 3, 4, 5};
  auto counteven = std::count_if(std::begin(v), std::end(v),
                                 [](int x) { return x % 2 == 0; });
  std::cout << "The number of even vector elements are: " << counteven;
}

void oopbase();
void MainMethod();

int main() {
  MainMethod();
  oopbase();
  lambda();
  std::vector<int> v = {10, 20, 40, 5, -20, 75};
  for (auto el : v) {
    std::cout << el << '\n';
  }
}

class Caligh {
public:
  int year;
  std::string brand;
  std::string model;
};

void oopbase() {
  Caligh Car;
  Car.brand = "Subaru";
  Car.model = " WRX STI ";
  Car.year = 2014;

  // Create another object
  Caligh Car1;
  Car1.brand = "Ford";
  Car1.model = " Shelby Mustang ";
  Car1.year = 2013;

  std::cout << Car.brand << Car.model << Car.year << '\n';
  std::cout << Car1.brand << Car1.model << Car1.year << std::endl;
  return;
}

class MainMeth {
public:
  void myMethod() { std::cout << "Accessing void method from class"; }
};

void MainMethod() {
  MainMeth access;
  access.myMethod();
  std::cout << std::endl;
}