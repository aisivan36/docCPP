#include <iostream>
using namespace std;

class Car {     // The class
public:         // Access specifier
  string brand; // Attribute
  string model; // Attribute
  int year;     // Attribute
  string power;
  Car(string x, string y, int z, string p); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z, string p) {
  brand = x;
  model = y;
  year = z;
  power = p;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999, "350HP");
  Car carObj2("Ford", "Mustang", 1969, "700HP");

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year
       << ", Power: " << carObj1.power << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year
       << ", Power: " << carObj2.power << "\n";
  return 0;
}
