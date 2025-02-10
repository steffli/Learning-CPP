#include <iostream>
/*
Basic Operations in C++
fundamental arithmetic, relational, and logical operators.
*/

class Calculator
{
    public:

    int add(int a, int b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }
    int modulo(int a, int b)
    {
        return a % b;
    }

};
int main()
{
    int a;
    int b;

    std::cout << "Enter Integer: ";
    std::cin >> a;
    std::cout << "Enter second Integer: ";
    std::cin >> b;

    Calculator calc;
    int addition = calc.add(a,b);
    int subtraction = calc.sub(a,b);
    int product = calc.multiply(a,b);
    int division = calc.divide(a,b);
    int modulus = calc.modulo(a,b);

    std::cout << addition << std::endl;
    std::cout << subtraction << std::endl;
    std::cout << product << std::endl;
    std::cout << division << std::endl;
    std::cout << modulus << std::endl;
}