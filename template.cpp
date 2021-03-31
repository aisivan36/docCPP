#include <iostream>

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

void MainTemplateClass()
{
    std::string a = "The value of x is: ";
    ClassTemplate<int> o{123};
    std::cout << a << o.getvalue() << std::endl;

    ClassTemplate<double> o2{456.789};
    std::cout << a << o2.getvalue() << std::endl;
}