#include <iostream>
#include "template.h"

template <typename T, typename U>
void myfunction(T t, U u)
{
    std::cout << "The first parameter is: " << t << '\n';
    std::cout << "The second parameter is: " << u << '\n';
}

void MainTemplateClass();

int main()
{
    MainTemplateClass();
    int x = 123;
    double d = 456.789;
    myfunction<int, double>(x, d);
}

template <typename T>
class ClassTemplate
{
private:
    T x;

public:
    ClassTemplate(T xx)
        : x{xx}
    {
    }
    T getvalue()
    {
        return x;
    }
};

// void Another_template_class(); // already called with header

void MainTemplateClass()
{
    Another_template_class();
    std::string a = "The value of x is: ";
    ClassTemplate<int> o{123};
    std::cout << a << o.getvalue() << std::endl;

    ClassTemplate<double> o2{456.789};
    std::cout << a << o2.getvalue() << std::endl;
}

template <typename T>

class YourClass
{
private:
    T x;

public:
    YourClass(T xx);
};

template <typename T>

YourClass<T>::YourClass(T xx)
    : x{xx}
{
    std::cout << "Constructor invoked. The value of x is: " << x << '\n';
}

void Another_template_class()
{
    YourClass<int> o{123};
    YourClass<std::string> o1{"kokook"};
    YourClass<bool> o2{false};
}