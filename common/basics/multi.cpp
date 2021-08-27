
#include "multi.h"

void TellFunc();

int main()
{
    // We can call it with this
    MyNameSpace::InsideSpace::MyNameFunc();
    // Or this one
    using namespace MyNameSpace::InsideSpace;
    MyNameFunc();

    // Another function
    myfunction();
    std::cout << "From Main Multicpp\n";

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; // pointer to the first array element std::cout << *p;
    std::cout << *p << '\n';

    // int x = 123;
    // int *pint = &x;
    // void *pvoid = pint;                     // convert from int pointer 
    // int *pint2 = static_cast<int *>(pvoid); // cast a void pointer to int // pointer
    // std::cout << *pint2;                    // dereference a pointer

    TellFunc();
}

void AtellFunc(int arg[])
{
    // This is a pointer so we need to dereference it with *
    std::cout << *arg << '\n';
}

class MyBaseClass
{
public:
    virtual ~MyBaseClass() {}
};

class MyDerivedClass : public MyBaseClass
{
};

void TryCatch();

void TellFunc()
{
    MyBaseClass *base = new MyDerivedClass;
    MyDerivedClass *derived = new MyDerivedClass;

    if (dynamic_cast<MyDerivedClass *>(base))
    {
        std::cout << "It can be and OK \n";
    }
    else
    {
        std::cout << "That's not convertible type./n";
    }

    // derived to base
    if (dynamic_cast<MyBaseClass *>(derived))
    {
        std::cout << "OK.\n";
    }
    else
    {
        std::cout << "Not convertible.\n";
    }
    delete base;
    delete derived;

    int arr[5] = {3, 2, 3, 4, 5};
    AtellFunc(arr);
    TryCatch();
}

void TryCatch()
{
    // try
    // {
    //     std::cout << "Let assume some error occourred in our program. \n";
    //     std::cout << "We throw an exception of type int, for example." << '\n';
    //     std::cout << "This signals that something went wrong." << '\n';
    //     throw 123;                              // throw an exception if there is an error
    //     throw std::string{"Some string error"}; // throw an exception // if there is an error
    // }

    // catch (int e)
    // {
    //     std::cout << "Interger exception raised! The value is: " << e << '\n';
    // }
    // catch (const std::string &e)
    // {
    //     // catch and handle the exception
    //     std::cout << "Exception raised!." << '\n';
    //     std::cout << "The exception has a value of " << e << '\n';
    // }

    // >>>>>>>>>>>>>>>>>>>>>>>>>First line<<<<<<<<<<<<<<<<<<<<
    // >>>>>>>>>>>>>>>>>>>>>>>>>First line<<<<<<<<<<<<<<<<<<<<
    // >>>>>>>>>>>>>>>>>>>>>>>>>First line<<<<<<<<<<<<<<<<<<<<
    // //
    // //

    // -------------The first exception is thrown the control of the program is transfered to a catch clause
    //  ------------This means that remainder of the code inside try block will no be executed
    try
    {
        bool someflag = false;
        bool someotherflag = true;
        std::cout << "We can have multiple throw exceptions." << '\n';
        if (someflag)
        {
            std::cout << "Throwing an int exception." << '\n';
            throw 123;
        }
        if (someotherflag)
        {
            std::cout << "Throwing a string exception." << '\n';
            throw std::string{"Some string error"};
        }
    }
    catch (int e)
    { // catch and handle the exception
        std::cout << "Integer exception raised!." << '\n';
        std::cout << "The exception has a value of: " << e << '\n';
    }
    catch (const std::string &e)
    { // catch and handle the exception
        std::cout << "String exception raised!." << '\n';
        std::cout << "The exception has a value of: " << e << '\n';
    }
}