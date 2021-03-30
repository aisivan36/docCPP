#include <iostream>

class WoreCaP
{
public:
    int x, y, a;
    WoreCaP(int xx, int yy)
        // This is the prefered way of making initializing class data members
        : x{xx}, y{yy}, a{x * y}

    {
        // x = xx;
        // y = yy;
        // a = x + y;
    }
};

int main()
{
    WoreCaP o{2, 2};
    std::cout << "User-provided constructor invoked." << '\n';
    std::cout << o.x << o.y << " Result: " << o.a;
}
