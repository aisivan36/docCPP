#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << "Enter a text file that you can wanna read.: ";
    std::string enter;
    std::getline(std::cin, enter);

    // std::fstream fs{enter};
    // std::string s;
    std::string esnter;

    // for write
    std::cout << "Write something to this file: : ";
    std::string writes;
    std::getline(std::cin, writes);
    std::fstream fs{
        enter,
        std::ios::app};
    // write
    fs << writes;
    // Read
    std::string writes;

    // fs >> enter;

    // //     // Getline for drawing on the same line
    // std::getline(fs, enter);
    // std::cout << enter << '\n';

    while (fs >> writes)
    {
        // Getline for drawing on the same line
        std::getline(fs, writes);
        std::cout << writes << '\n';
    }
}