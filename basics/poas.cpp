// C++ 2017

#include <iostream>
#include <string>
#include <variant>
int main()
{
    std::variant<int, double> thevariant{123};
    std::cout << "Current variant: " << std::get<int>(thevariant) << '\n';

    try
    {
        std::cout << std::get<double>(thevariant) << '\n';
        ;
    }
    catch (const std::bad_variant_access &ex)
    {
        std::cout << "Exception raised. Description: " << ex.what();
    }
}