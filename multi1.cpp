#include "multi.h"

void MyNameSpace::InsideSpace::MyNameFunc()
{
    std::cout << "This from name space seperate file\n";
}

void myfunction()
{
    std::cout << "Helo from multi1 cpp\n";
}