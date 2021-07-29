#include <iostream>
#include <memory>

class MyClass
{

public:
    void printmessage()
    {
        std::cout << "Hello from a class.\n";
    }
};

// start myanotherclasspointed

class MyAnotherClassPointed
{
private:
    int x;
    double d;

public:
    MyAnotherClassPointed(int xx, double dd)
        : x{xx}, d{dd}
    {
    }
    void anotherClassPointd()
    {
        std::cout << "Data members values are: " << x << " and " << d << '\n';
    }
};

void anotherClassPointed()
{ //---------------------------------------------------- int x, double d.
    std::unique_ptr<MyAnotherClassPointed> p = std::make_unique<MyAnotherClassPointed>(123, 456.789);
    // Call it
    p->anotherClassPointd();
}

// ends myanotherclasspointed

void MainClassPointer()
{
    anotherClassPointed();
    // This is a unique pointer which is cannot be copied
    std::unique_ptr<MyClass> p = std::make_unique<MyClass>();
    p->printmessage();

    // ---------This is a shared pointer this is can be copied
    std::shared_ptr<int> p1 = std::make_shared<int>(123);
    std::shared_ptr<int> p2 = p1;
    std::shared_ptr<int> p3 = p1;
    std::cout << *p2 << ' ' << *p3 << " And " << *p1 << '\n';
    // ends shared pointer

    // This is jus an example of converting data types
    int x = 123;
    double d = 456.789;
    bool b = true;
    double doubleresult = static_cast<double>(x);
    std::cout << "Int to double: " << doubleresult << '\n';
    int intresult = static_cast<int>(d); // double to int
    std::cout << "Double to int: " << intresult << '\n';
    bool boolresult = static_cast<bool>(x); // int to bool
    std::cout << "Int to bool: " << boolresult << '\n';
    // ends converting data types
}

class Another
{
public:
    int roll;
    Another()
    {
        roll = 3;
        std::cout << "Destructor "
                  << roll << '\n';
    }
    ~Another()
    {
        roll = -3;
        std::cout << "Destructor "
                  << roll << '\n';
    }
};

class MyBaseClass
{
public:
    virtual void dowork() = 0;
    virtual ~MyBaseClass()
    {
    }
};

class MyDerivedClass : public MyBaseClass
{
public:
    void dowork() override
    {
        std::cout << "Do work from a MyDerivedClass.\n";
    }
};

class MySecondDerivedClass : public MyBaseClass
{
public:
    void dowork() override
    {
        std::cout << "Do work from a MySecondDerivedClass.\n";
    }
};

int main()
{

    std::unique_ptr<MyBaseClass> p1 = std::make_unique<MyDerivedClass>();
    p1->dowork();

    std::unique_ptr<MyBaseClass> p2 = std::make_unique<MySecondDerivedClass>();
    p2->dowork();

    MainClassPointer();

    // int numbers[200];

    // int *parray = numbers;
    // for (int i = 0; i < 200; ++i)
    // {
    //     std::cout << "The value is: " << *parray << '\n';
    //     parray++;
    // }

    std::unique_ptr<int> p = std::make_unique<int>(123);
    std::cout << *p << '\n';

    // /Destructors RUn later of the others is called
    Another s;
    return 0;
}