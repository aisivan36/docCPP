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

class TheClass
{
private:
    int x, *y, c;

public:
    TheClass(int xx, int yy, int c) : x{xx}, y{new int{yy}}
    {
    }
    TheClass(const TheClass &rhs)
        : x{rhs.x}, y{new int{*rhs.y}}
    {
        std::cout << "User defined copy constructor invoked. \n";
    }
};

void mainClass()
{
    TheClass o1{1, 2, 3};
    TheClass o2 = o1;
}

void Move_Const();
void MainDestruct();

int main()
{
    MainDestruct();
    Move_Const();
    mainClass();
    WoreCaP o{2, 2};
    std::cout << "User-provided constructor invoked." << '\n';
    std::cout << o.x << o.y << " Result: " << o.a;
}

class MoveClass
{
private:
    int x;
    std::string s;

public:
    MoveClass(int xx, std::string ss)
        : x{xx}, s{ss}
    {
    }
    MoveClass &operator=(MoveClass &&rhs)
    {
        x = std::move(rhs.x);
        s = std::move(rhs.s);
        return *this;
    }
};

void OperatorOverloading();

void Move_Const()
{
    OperatorOverloading();
    MoveClass o1{123, "This is currently in object 1."};
    MoveClass o2{456, "This is currently in object 2."};
    o2 = std::move(o1);
    std::cout << "Move assignment operator used.\n";
}

class OverloadingClass
{
private:
    int x;
    double d;

public:
    OverloadingClass()
        : x{0}, d{0.0}
    {
    }
    // Prefix operator ++
    OverloadingClass &operator++()
    {
        ++x;
        ++d;
        std::cout << "Prefix operator ++ invoked. First " << d << x << std::endl;
        return *this;
    }
    OverloadingClass operator++(int)
    {
        OverloadingClass tmp(*this); // Create a copy
        operator++();                // Invoke the prefix operator overload
        std::cout << "Postfix operator ++ invoked.\n";
        return tmp; // Return old value
    }
};

void OperatorOverloading()
{
    OverloadingClass TheObject;
    // Prefix operator
    ++TheObject;
    TheObject.operator++(0);
}

// ----------------------Over Loading Operator---------------------
#include <iostream>

class MyClass
{
private:
    int x;
    double d;

public:
    MyClass(int xx, double dd)
        : x{xx}, d{dd}
    {
    }
    MyClass &operator+=(const MyClass &rhs)
    {
        this->x += rhs.x;
        this->d += rhs.d;
        return *this;
    }
    friend MyClass operator+(MyClass lhs, const MyClass &rhs)
    {
        lhs += rhs;
        return lhs;
    }
};

void Destructor();
void MainDestruct()
{
    Destructor();
    MyClass myobject{1, 1.0};
    MyClass mysecondobject{2, 2.0};
    MyClass theob = myobject + mysecondobject;

    std::cout << "used the overloaded += operator\n"
              << std::endl;
}

// -------------------Destructor-----------
class CClasseS
{
private:
    int *p;

public:
    CClasseS()
        : p{new int{123}}
    {
        std::cout << "Create a Pointer in the constructor.\n";
    }

    ~CClasseS()
    {
        delete p;
        std::cout << "The constructor is deleted.\n";
    }
};

void Destructor()
{
    CClasseS a;
}