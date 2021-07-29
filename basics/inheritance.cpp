#include <iostream>

class MyBaseClass
{
public:
    char c;
    int x;
};

class MyDerivedClass : public MyBaseClass
{
    //
};

void Protected_Main();

int main()
{
    Protected_Main();
    MyDerivedClass o;
    o.c = 'a';
    o.x = 12;
    std::cout << "The c is: " << o.c;
}

class MyProtect
{
private:
    std::string name;

public:
    explicit MyProtect(const std::string &aname)
        : name{aname}
    {
    }
    std::string getname() const { return name; }
};

class Student : public MyProtect
{
private:
    int semester;

public:
    Student(const std::string &aname, int asemester)
        : MyProtect::MyProtect{aname}, semester{asemester}
    {
    }
    int getsemester() const { return semester; }
};

void Protected_Main()
{
    MyProtect person{"John Doe"};
    std::cout << person.getname() << "\n";

    Student student{"Jane Doe", 2};
    std::cout << student.getname() << '\n';
    std::cout << "Semester is: " << student.getsemester() << "\n";
}