#include <exception>
#include <iostream>

double calculate_mpg(int miles, int gallons) {
  if (gallons == 0)
    throw 0;
  if (miles < 0 || gallons < 0)
    throw std::string{"Negative value error"};
  return static_cast<double>(miles / gallons);
}

int main() {
  int miles{};
  int gallons{};
  double miles_per_gallon{};

  std::cout << "Enter the miles: ";
  std::cin >> miles;
  std::cout << "Enter the gallons: ";
  std::cin >> gallons;

  try {
    miles_per_gallon = calculate_mpg(miles, gallons);
    std::cout << "Result" << '\n';
  } catch (int &ex) {
    std::cout << "Tried to divide by zero" << '\n';
  } catch (std::string &ex) {
    std::cerr << ex << std::endl;
  }
  std::cout << "Bye" << '\n';
  return 0;
}