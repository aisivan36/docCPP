
#include "multi.h"

int main()
{
    // We can call it with this
    MyNameSpace::InsideSpace::MyNameFunc();
    // Or this one
    using namespace MyNameSpace::InsideSpace;
    MyNameFunc();

    // Another function
    myfunction();
    std::cout << "From Main Multicpp";
}
