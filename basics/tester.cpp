#include <iostream>

class TheClass
{
public:
    static int x;
};

int TheClass::x = 0;

class AnotherClass
{
public:
    static std::string a;
};

std::string AnotherClass::a = "Do not enter a \"0 or a char";

void myfunc()
{
    static int x = 0;

    x++;
    std::string cois = "The function is called (";
    if (x == 1)
    {
        // Singular
        std::cout << cois << x << ") time\n";
    }
    else
    {
        // Plural
        std::cout << cois << x << ") times\n";
    }
    // std::cout << "The function is called (" << x << ") times\n";
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
    char s = ' ';
    // TheClass::x;

    if (input != 0 && s)
    {
        for (int i = 0; i < 5; i++)
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
            std::cout << "Please enter correct value. hint: " << AnotherClass::a << std::endl;
        }
    }
}