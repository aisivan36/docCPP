#include <iostream>
#include <iterator>

class MyClass {
    public:
    void operator() (int x){
        std::cout << "The functiong object is: " << x << " Get Called" << '\n';
    }
};

class AnotherClass {
    public:
    bool operator() (int a)
    {
        if (a % 3 == 0) {
        return true;
        }
        else {
        return false;
        }
    }
};

int main() {
    MyClass theobject;
    theobject(123);

    AnotherClass iyo;
    bool NoWay = iyo(123);
    if (NoWay)
    {
        std::cout << "There is true" << '\n';
    }
    else {
    std::cout << "There is false" << '\n';
    }


    // Lambdas
    // [Captures](Parameters) {Lambdas body}
    int abc = 456;
    auto mylabda = [abc]() {std::cout << "This is a lambda the value is: "<< abc << std::endl; };
    mylabda();
}