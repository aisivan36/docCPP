#include <iostream>

int mysquarednumber(int x, int y); // function declaration

int main()
{
    int myresult = mysquarednumber(2, 4); // a call to the function
    std::cout << "2 + 4 is: " << myresult;
} // function definition
int mysquarednumber(int x, int y)
{
    return x + y;
}