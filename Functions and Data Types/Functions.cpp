#include <iostream>

/*
Functions
performs tasks that are organized as separate units in a program. Functions break down code and help keeping it
more managable und reusable
Built-in functions are provided by libraries and included by header files in order to use them.
User-defined functions are created manually to perform tailored tasks
*/

//example addNumbers with prototype. Prototype is a declaration without its body and informs compiler
//about function name, return type and parameters
int addNumbers(int a, int b);

int addNumbers(int a, int b)
{
    int sum = a + b;
    return sum;
}

//lamda functions unnamed funtions with concise syntax
//[capture-list](parameter) -> return_type 
//capture-list: list of variables that lambda function can acceess, parameters: input parameters
//return_type: type of value that the lambda function can return



int main()
{
    int a = 5;
    int b = 3;
    int multiplier = 2;

    auto times = [multiplier](int a)
    {
    return a * multiplier;
    };

    int result = addNumbers(a,b);
    int product = times(a);
    std::cout << result << std::endl;
    std::cout << product << std::endl;
}
