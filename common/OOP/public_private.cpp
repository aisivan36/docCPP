#include <iostream>
#include <string>

class MyClass {
private:
  std::string name{"ivan"};
  int health;
  int xp;

public:
  // Trying to access a private through public
  void talk(std::string listen) {
    std::cout << name << " speaks " << listen << '\n';
  }
};

int main() {
  MyClass obj;
  //   Accessing private through public
  obj.talk("Good boys!");
}