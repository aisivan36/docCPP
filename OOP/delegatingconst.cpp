#include <iostream>

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
};

//  Delegating Constructor
Player::Player() : Player{"None", 0, 0} {
  std::cout << "No-args constructor" << '\n';
}
//  Delegating Constructor
Player::Player(std::string name_val) : Player{name_val, 0, 0} {
  std::cout << "One-arg constructor" << '\n';
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
  std::cout << "Three-args constructor" << '\n';
}

int main() {
  Player empty;
  Player frank{"Frank"};
  Player villain{"Ivan"};
  return 0;
}