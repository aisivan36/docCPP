#include <iostream>
#include <string>
// not recommended using namespace std::
// using namespace std; // it can omit and use std:: instead.

// void Greetings()
// {
//     std::cout << "What\"is up first line" << std::endl;
// }

// void Chars()
// {
//     char s = 'b';
//     std::cout << " The value of variable b is: " << s << std::endl;
//     s = 90;
//     std::cout << " The value of variable b is: " << s << std::endl;
//     std::cout << " The value of variable b is: " << sizeof(bool) << " byte(s)" << std::endl;
// }

// void Arithmetic()
// {
//     int a = 15;
//     --a;
//     a++;
//     std::cout << "The value of a is: " << a << std::endl;
//     int x = 123;
//     int y = 456;
//     int z = x + y; // addition
//     z = x - y;     // subtraction
//     z = x * y;     // multiplication
//     z = x / y;     // division
//     std::cout << "The value of z is: " << z << '\n';
// }

// void IntergerTypes()
// {
//     unsigned int x = 123;
//     int y = -256;
//     int a, b, c;
//     a = 32;
//     b = 45;
//     c = 32;
//     std::cout << "The value of a b and c is: " << a << " " << b << " and " << c << std::endl;
//     std::cout << "The value of x is: " << x << ", the value of y is : " << y << std::endl;
// }

// void StandartInput()
// {
// std::cout << "Please enter a char(one word) number double and press enter: ";
// char b = 0;
// int x = 0;
// double a = 0;
// std::cin >> b >> x >> a;
// std::cout << "You entered: " << b << ", " << x << " and " << a;

// std::cout << "Please enter two integer numbers: ";
// int x;
// int y;
// std::cin >> x >> y;
// int z = x + y;
// std::cout << "The result is: " << z;

//     double d = 9 / 2;
//     std::cout << "The result is: " << d << '\n';
//     d = 9.0 / 2;
//     std::cout << "The result is: " << d;

//     std::cout << "Please write one word and press enter: ";
//     std::string b;
//     std::cin >> b;
//     std::cout << "You entered: " << b;
// }

// void Arrays()
// {
//     char arr[5] = {'a', 'a', 'a', 's', 's'};
//     arr[1] = 'b';
//     std::cout << "The array is: " << arr;
// }

// void Pointers()
// {
//     char a = 'b';
//     int x = 123;
//     char *c = &a;
//     int *p = &x;
//     // This is a smart pointers maybe
//     *p = 321;
//     // here we can access an x variable instead of *p
//     std::cout << "The pointer is: " << x << " and the char is: " << *c;
// }

// void String_Library()
// {
//     std::string a = "A string variable";
//     a += " is the end";
//     char b = '!';
//     a += b;
//     char change = a[0];
//     char change1 = a.at(7);

//     std::cout << a << "The index of 1 is: " << change << " Then the 7 is: " << change1 << std::endl;

//     // an if statement
//     std::string s1 = "what the hell";
//     std::string es1 = "s1";
//     if (s1 == es1)
//     {
//         std::cout << "Yes it is the same word " << s1;
//     }
//     else
//     {
//         std::cout << "The word that you're lookin' for doesn't exist";
//     }
// }

// void StringInput()
// // To enter standard input string
// {
//     std::string s;
//     std::cout << "Please enter a string: ";
//     // use getline and cin inside of it. it allows us to write which is contain a white space.
//     std::getline(std::cin, s);
//     std::cout << "You entered: " << s;
// }

// void TesterPointer()
// // 13.6 A Pointer to a String
// {
//     std::string s = "wokay";
//     // s.at(1) = 's';
//     std::cout << s.c_str();
// }

// void Substrings()
// {
//     // 13.7 Substrings

//     std::string s = "Do not to write a hello";
//     std::string mysubstring = s.substr(9, 6);
//     std::cout << "The substring value is: " << mysubstring;
// }

// void FindSubstring()
// {
//     std::string s = "This is a Hello World String";
//     std::string stringtofind = "Hello";
//     std::string::size_type found = s.find(stringtofind);
//     if (found != std::string::npos)
//     {
//         std::cout << "Substring found at position: " << found;
//     }
//     else
//     {
//         std::cout << "The substring is not found";
//     }
// }

// void Creating_Substring()
// {
//     std::string fullname = "Ivan Boginski";
//     std::string firstname = fullname.substr(0, 4);
//     std::string lastname = fullname.substr(5, 8);
//     std::cout << "The full name is: " << fullname << std::endl;
//     std::cout << "The first name is: " << firstname << '\n';
//     std::cout << "The last name is: " << lastname << '\n';

// }

// void swicth_expression()
// {
//     int x = 15;
//     switch (x)
//     {
//     case 1:
//         std::cout << "The value of x is 1.";
//         break;
//     case 2:
//         std::cout << "The value of x is 2.";
//         break;
//     case 3:
//         std::cout << "The value of x is 3."; // this statement will be // executed break;
//     default:
//         std::cout << "The value is none of the above.";
//         break;
//     }
// }

// void For_statements()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         std::cout << "The counter is: " << i << std::endl;
//     }

//     // While statements
//     int x = 0;
//     while (x < 10)
//     {
//         std::cout << "The value of x is: " << x << std::endl;

//         x++;
//     }
//     std::cout << "---- the end of while statements" << std::endl;

//     // Do statements
//     int p = 0;
//     do
//     {
//         std::cout << "The value of p is: " << p << std::endl;
//         p++;
//     } while (p < 10);

//     int arr[5] = {3, 20, 8, 15, 10};
//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << "arr[" << i << "] = " << arr[i] << '\n';
//     }
// }

void learning();
void ByReference();
// void Function_Overloading();

int main()
{
    // Function_Overloading();
    ByReference();
    learning();
    // For_statements();
    // swicth_expression();
    // Creating_Substring();
    // FindSubstring();
    // Substrings();
    // TesterPointer();
    // StringInput();
    // String_Library();
    // Pointers();
    // Arrays();
    // StandartInput();
    // Arithmetic();
    // Greetings();
    // Chars();
    // IntergerTypes();
    std::cout << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << "This is a main function ";
    return 0;
}

int multiplereturns(int x);

void learning()
{

    std::cout << "The value of a function is: " << multiplereturns(25) << std::endl;
    std::cout << "This is void function and needs no return";
}

int multiplereturns(int x)
{

    if (x >= 42)
    {
        return x;
    }
    return 12;
}

void myfunctionref(int &byreference)
{
    byreference++;
    std::cout << "The reference is: " << byreference << std::endl;
}

void myfunction_reference(const std::string &byconstreference)
{
    std::cout << "The arguments passed by const reference: " << byconstreference << std::endl;
    byconstreference;
}

void MainConst()
{
    std::string s = "The main const~!";
    myfunction_reference(s);
}

void myanotherfunc(const std::string &byanotherref);

void mainmyanother()
{
    std::string y = "You got me right!";
    myanotherfunc(y);
}
void myanotherfunc(const std::string &byanotherref)
{
    std::cout << "Arguments passed by const reference: " << byanotherref << std::endl;
    byanotherref;
}
void anotherexam();

void ByReference()
{
    anotherexam();
    std::cout << "\n";
    mainmyanother();
    MainConst();
    int y = 123;
    myfunctionref(y);
}

void myprint(char param);
void myprint(int param);
void myprint(double param);

// void Function_Overloading()
// {
//     myprint('c');     // calling char overload
//     myprint(123);     // calling integer overload
//     myprint(456.789); // calling double overload
// }

// void myprint(char param)
// {
//     std::cout << "Printing a character: " << param << '\n';
// }
// void myprint(int param)
// {
//     std::cout << "Printing an integer: " << param << '\n';
// }
// void myprint(double param)
// {
//     std::cout << "Printing a double: " << param << '\n';
// }

void Operator_new_delete();
void anotherexam()
{
    Operator_new_delete();
    std::cout << "Print another exam";
}

void Operator_new_delete()
{
    //  Remember always use delete after you use a new keyword
    int *p = new int;
    *p = 123;
    std::cout << "The pointed-to value is: " << *p << "\n";
    // Do not forget to use delete after the new ketword was declared
    delete p;

    int x = 123; // Automatic storage duration...
    std::cout << "The value with an automatic storage duration is: " << x << "\n";
    int *l = new int{x}; // Allocate memory and copy the value from x to it...
    std::cout << "The value with a dynamic storage is: " << *l << "\n";
    delete l;
}