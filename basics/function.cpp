#include <iostream>
#include <string>

int mysquarednumber(int x, int y); // function declaration

void returnFunc();

int main() {
  int myresult = mysquarednumber(2, 4); // a call to the function
  std::cout << "2 + 4 is: " << myresult << std::endl;

  returnFunc();

} // function definition
int mysquarednumber(int x, int y) { return x + y; }

// Return statement
int typeAvalue(int x); // use int because we return an interger

void returnFunc() {
  int input;

  std::cout << "guess between 30 or 34: ";
  std::cin >> input;

  std::cout << "The value of yours is: " << typeAvalue(input);
}

int typeAvalue(int x) {
  if (x >= 32) {
    return x;
  }
  return 0;
}