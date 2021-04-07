#include <iostream>
#include <filesystem>
int main()
{
    std::filesystem::path folderpath = "/home/ivan/Downloads/testc++";
    if (
        std::filesystem::create_directory(folderpath))
    {
        std::cout << "The path: " << folderpath << " exists.";
    }
    else
    {
        std::cout << "The path: " << folderpath << " does not exist.";
    }
}

// For compiling this code we use this parameter
// -------  g++ -o filesystem filesystem.cpp --std=c++17  -----