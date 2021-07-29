#include <iostream>
using namespace std;

int main() {
  //   int input;

  try {
    int input;
    cout << "How old are you?: " << '\n';
    cin >> input;
    if (input >= 18) {
      cout << "Access granted - you are old enough.";
      return 0;
    } else {
      throw(input);
    }
  } catch (...) // use ... dot three times if you do not know what the type
                // inside try block is.
  {
    cout << "Access denied - You must be at least 18 years old.\n";
    // cout << "Age is: " << myNum; // commenting out to use variable and define
    // parameter as int or appropriate data type inside the try block.
  }
  return 0;
}
