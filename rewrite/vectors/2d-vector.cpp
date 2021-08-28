#include <iostream>
#include <vector>
// using namespace std;

int main() {
  std::vector<std::vector<int>> vector{
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  std::vector<std::vector<int>> vect{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  std::cout << "\nHere is the 2d-vector\n";
  std::cout << vector[1][2];

  std::cout << "\nHere are the 2d-vector nested For Loop\n";

  for (int i = 0; i < vect.size(); i++) {
    for (int j = 0; j < vect[i].size(); j++) {
      std::cout << vect[i][j] << " ";
    }
    std::cout << std::endl;
  }
}