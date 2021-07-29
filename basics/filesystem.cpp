// C++ 2017

#include <iostream>
#include <filesystem>
int main()
{
    std::filesystem::path folderpath = "/home/ivan/Downloads/testc++";
    if (
        std::filesystem::remove(folderpath))
    {
        std::cout << "The path: " << folderpath << " was removed...";
    }
    else
    {
        std::cout << "The path: " << folderpath << " does not exist.";
    }
}

// For compiling this code we use this parameter
// -------  g++ -o filesystem filesystem.cpp --std=c++17  -----