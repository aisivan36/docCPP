#include <iostream>
#include <string>

void findingSubString() {
  std::string s = "This is how to find the Program of string";
  std::string stringtofind = "Program";
  std::string::size_type found = s.find(stringtofind); // we find it

  if (found != std::string::npos) {
    std::cout << "Substring found at possition: " << found << std::endl;

  } else {
    std::cout << "The substring is not found" << std::endl;
  }
}

void subString() {
  std::string s = "What is up!";
  std::string mySubString = s.substr(6, 5); // Access the index of 6 and 5
  std::cout << "The subString value is: " << mySubString << std::endl;
}

void pointerString() {
  /// A string has a member function .c_str() which returns a pointer to its
  /// first element. It is also said it return a pointer to anull-terminated
  /// character array our string id made of

  std::string s = "What is up!";
  std::cout << s.c_str();

  /// This member function is of type const char* and is useful when we want to
  /// pass our std::string variable to a function accepting a const char*
  /// parameter.
}

void stringInput() {
  std::string s;
  std::cout << "Please enter a string: ";

  std::getline(std::cin, s);
  std::cout << "You entered: " << s << std::endl;

  /// We use the std::getline because our string can contain white spaces. And
  /// if we used the std::cin function alone, it would accept only a part of the
  /// string. The std::getline function has the following signature:
  /// std::getline(read_from, into); The function reads a line of text from the
  /// standard input (std::cin) into a string (s) variable. A rule of thumb: if
  /// we need to use the std::string type, include the <string> header
  /// explicitly.
}

void comparingString() {
  std::string s1 = "Hello";
  if (s1 == "Hello") {
    std::cout << "The string is equal to \"Hello\"" << std::endl;
  }
}

void accessingChar() {
  std::string s = "what is up";
  char c1 = s[0];
  char c2 = s.at(0);

  char c3 = s[6];
  char c4 = s.at(6);

  std::cout << "First character: " << c1 << ", sixth character: " << c3
            << std::endl;
}

int main() {
  findingSubString();
  subString();
  comparingString();
  accessingChar();
  // stringInput();

  std::string s = "What is up";
  char c = '!';
  s += c;
  std::cout << s;
}