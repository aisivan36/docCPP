#include <iostream>
#include <string>

template <typename T> void Dash(T value) { std::cout << value << std::endl; }

void switch_case();
int main() {
  switch_case();
  Dash(7);
  Dash('r');
  Dash(true);
  Dash("It runs just fine.");
}

void Guess() {
  std::string input = "";
  std::cout << "Type something: ";
  std::getline(std::cin, input);
  std::cout << "You typed: " << input << '\n';
}

void switch_case() {

  Guess();
  std::cout << "Guess pick one A B C D F: ";
  char grade;
  std::cin >> grade;

  switch (grade) {
  case 'A':
    std::cout << "Excellent!" << '\n';
    break;
  case 'B':
  case 'C':
    std::cout << "Well done!" << '\n';
    break;
  case 'D':
    std::cout << "You passed!" << '\n';
    break;
  case 'F':
    std::cout << "Better try again!" << '\n';
    break;
  default:
    std::cout << "Invalid grade" << '\n';
  }
}