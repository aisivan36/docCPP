#include <iostream>
#include <string>

class dog {
public:
  dog() {
    _legs = 4;
    _bark = true;
  }

  // declare
  void setDogSize(std::string dogSize) { _dogSize = dogSize; }

  virtual void setEars(std::string type) { _earType = type; }

private:
  std::string _dogSize, _earType;
  int _legs;
  bool _bark;
};

class breed : public dog {
public:
  breed(std::string color, std::string size) {
    _color = color;
    setDogSize(size); // set it
  }

  std::string getColor() { return _color; }

  // virtual function redefined
  void setEars(std::string length, std::string type) {
    _earLength = length;
    _earType = type;
  }

protected:
  std::string _color, _earLength, _earType;
};

int main() {
  dog mogrel;
  breed labrador("yellow", "large");
  mogrel.setEars("pointy");
  labrador.setEars("long", "flopy");
  std::cout << "cody is a " << labrador.getColor() << " labrador " << std::endl;
}