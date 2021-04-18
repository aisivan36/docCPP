#include <iostream>
#include <string>

class Player {
private:
  std::string name;
  int health;
  int xp;

public:
  // Overloaded Constructor
  Player();
  Player(std::string name_val);
  Player(std::string name_val, int health_val, int xp_val);

  std::string car;
  int price;
  int year;
  void listen(std::string say_something) {
    std::cout << name << " speaks " << say_something << std::endl;
  }
};

// class NewClass {

// };

Player::Player() : name{"None"}, health{0}, xp{0} {}

Player::Player(std::string name_val) : name{name_val}, health{0}, xp{0} {}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {}

int main() {

  Player empty;
  Player frank{"Frank"};
  Player villain{"Ivan"};

  // Accessing Struct or Class member wihtin a raw pointer
  Player *Pointer = new Player;
  // Can be either
  (*Pointer).car = "Peugeot";
  // Or with this arrow operator
  Pointer->price = 3;
  Pointer->year = 1;
  std::cout << "Price: " << Pointer->price << "$ Age: " << Pointer->year
            << " Year-old. Brand: " << Pointer->car << '\n';
  Pointer->listen("Nothing to say");

  // Always delete a raw pointer to avoid memory leaks
  delete Pointer;

  return 0;
}