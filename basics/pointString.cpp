#include <iostream>
#include <string>

/// A string has a member function .c_str() which returns a pointer to its first
/// element. And it is also said that returns a pointer to a null-terminated
/// character array our string is made of:

int main() {
  std::string s = "What is up!";
  std::cout << s.c_str();
}

/// This member function is of type const char* and is useful when we want to
/// pass our std::string variable to a function accepting a const char*
/// parameter