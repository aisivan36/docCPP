#include <iostream>
#include <vector>

int main() {
  std::vector<int> fall{1, 2, 3, 4, 5};

  std::cout << fall[0] << std::endl;
  std::cout << fall.at(1) << std::endl;
  std::cout << std::endl
            << "There are " << fall.size() << " In the Vectors" << std::endl;

  std::cout << "Please enter your number: ";

  std::cin >> fall[0];
  std::cin >> fall[1];
  std::cin >> fall[2];
  std::cout << fall[0] << std::endl;
  std::cout << fall.at(1) << std::endl;
  std::cout << fall.at(2) << std::endl;

  // add a value
  int addValue{0};

  std::cout << "Please enter your number: ";
  std::cin >> addValue;

  // Assign it and push back to fall
  fall.push_back(addValue);
  std::cout << fall[0] << std::endl;

  std::cout << "Please add one more number: ";
  std::cin >> addValue;
  fall.push_back(addValue);

  std::cout << fall[0] << std::endl;
  std::cout << fall.at(1) << std::endl;
  std::cout << fall.at(2) << std::endl;
  std::cout << fall.at(3) << std::endl;
  std::cout << fall.at(4) << std::endl;
  std::cout << std::endl
            << "There are " << fall.size() << " In the Vectors" << std::endl;
}