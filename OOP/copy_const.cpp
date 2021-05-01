#include <iostream>

class MainClass {
private:
  int x, y;

public:
  MainClass(int anx, int ay) : x{anx}, y{ay} {}
  //  User defined copy construct
  MainClass(const MainClass &Right_handside)
      : x{Right_handside.x}, y{Right_handside.y}
  // initialize members with other object's member
  {
    std::cout << "User defined copy constructor invoked";
  }
};

int main() {
  MainClass o1{1, 2};
  MainClass o2 = o1;
}