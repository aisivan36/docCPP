#include <iostream>
using namespace std;

int main() {
  int input;
  cout << "How old are you?: " << '\n';
  cin >> input;
  try {
    int input;
    if (input >= 18) {
      cout << "Access granted - you are old enough.";
      return 0;
    } else {
      throw(input);
    }
  } catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;
  }
  return 0;
}
