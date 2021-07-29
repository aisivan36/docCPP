#include <algorithm>
#include <iostream>

// int main() {
// int val = 0;

// do {
//     val +=3;
//     std::cout << val << '\n';
// }
// while(val <20);

// }


#include <memory>
class BaseClass {
    public:
    virtual void SomeWork() = 0;
    virtual ~BaseClass() {}
};

class DerivedClass : public BaseClass
{
    public:
    void SomeWork() override
    {
        std::cout << "Do some work from a derivedclass." << '\n';
    }
};


int main() {
    std::unique_ptr<BaseClass> p = std::make_unique<DerivedClass>();
    p->SomeWork();
}