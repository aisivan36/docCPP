#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << "Enter a text file that you can wanna read.: ";
    std::string enter;
    std::getline(std::cin, enter);

    std::fstream fs{enter};
    std::string s;
    while (fs)
    {
        std::getline(fs, s);
        std::cout << s << '\n';
    }
}