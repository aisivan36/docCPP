#include <fstream>
#include <iostream>
#include <string>

int main()
{
  std::cout << "Enter a text file that you can wanna read.: ";
  std::string enter = "";
  std::getline(std::cin, enter);

  // std::fstream fs{enter};
  std::string s;
  // std::string esnter;
  // char s;

  // for write
  std::cout << "Write something to this file: ";
  std::string writes = "- ";
  std::getline(std::cin, writes);
  std::fstream fs{enter, std::ios::app | std::ios::in};
  // write
  fs << writes;
  fs.close();
  // Read
  // std::ifstream read{enter};
  // fs;
  fs >> s;
  fs.clear();

  std::getline(fs, s);
  std::cout << s << '\n';

  // std::ifstream read{enter};
  // std::string s;
  // read >> s;
  // std::getline(read, s);
  // std::cout << s << '\n';

  std::cout << "Do you wanna read this file? (y/n) ";
  std::string read;
  std::cin >> read;

  if (read == "y")
  {

    std::ifstream read{enter};
    std::string s;
    read >> s;

    std::getline(read, s);
    std::cout << ' ' << s << '\n';
  }
  else
  {
    return 0;
  }

  // //     // Getline for drawing on the same line
  // std::getline(fs, enter);
  // std::cout << enter << '\n';

  // while (fs >> writes)
  // {
  //     // Getline for drawing on the same line
  //     std::getline(fs, writes);
  //     std::cout << writes << '\n';
  // }
}