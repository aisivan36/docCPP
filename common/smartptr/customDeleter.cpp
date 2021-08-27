#include <iostream>
#include <memory>

class Test {
    private:
    int data;
    public:
    Test():data(0) {std::cout << "\tTest constructor(" << data << ")" << '\n';}
    Test(int data):data(data) {std::cout << "\tTest constructor(" << data << ")" << '\n';}
    int get_data() const {return data;}
    ~Test(){std::cout << "\tTest destructor(" << data <<")" << '\n';}
};

void my_deleter(Test *ptr) {
    std::cout << "\tUsing my custom function deleter" << '\n';
    delete ptr;
}

int main() {
    // Using function
    std::cout << "Using a fucntion deleter" << '\n';

    {std::shared_ptr<Test> ptr1 {new Test{100}, my_deleter};}
    
    // This is a lambda expression
    std::cout << "This is a lambdas" << '\n';
    {
        std::shared_ptr<Test> ptr2{new Test{200},
        [](Test *ptr) {
            std::cout << "\tUsing my_custom Lambda deleter" << '\n';
        }};
    }
}