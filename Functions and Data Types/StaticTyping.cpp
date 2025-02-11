#include <iostream>

/*
Static Typing
Data Type of a variable is determined at compile time before the program is executed.
If mismatch occurs the compiler tries to adjust the data type known as type conversion
*/

int main()
{
    int num = 42;
    float pi = 3.14f;
    char c = 'c';

    c = num;

    //num is int and c is typed as char. Therefore if num is assigned to c the compiler will convert 
    //the value of 42 to its corresponding ASCII code.
    std::cout << "The value of num is: " << num << std::endl;
    std::cout << "The value of pi is: " << pi << std::endl;
    std::cout << "The value of c is: "<< c << std::endl;
}