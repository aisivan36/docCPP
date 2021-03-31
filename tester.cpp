#include <iostream>

class TheClass
{
public:
    static int x;
};

int TheClass::x = 2;

class AnotherClass
{
public:
    static int a;
};

int AnotherClass::a = 13;

void myfunc()
{
    static int x = 0;

    x++;
    std::cout << x << '\n';
}

// void TheInput(int &input)
// {
//     std::cout << "Guess a number: ";
//     int input;
//     std::cin >> input;
// }

int main()
{
    std::cout << "Guess a number: ";
    int input;
    std::cin >> input;
    AnotherClass::a;
    TheClass::x;

    if (input != 2)
    {
        for (int i = 0; i < 10; i++)
        {
            myfunc();
        }
    }
    else
    {
        int x = 3;
        int b = 14;
        int a = b * x;
        int c = a - 41;
        for (int i = 0; i < c; i++)
        {
            std::cout << "False the value is: " << AnotherClass::a << std::endl;
        }
    }
}