#include <iostream>
//std::cin/cout for input and output

int add(int a, int b)
{
    return a + b;
}

//class Calculator with function multiply
class Calculator
{
    public: //accessible globally
    int multiply(int a, int b)
    {
        return a * b;

    }

};



int main()
{
    int number;
    int number2;

    std::cout << "Enter Integer: ";
    std::cin >> number;
    std::cout << "Enter second Integer: ";
    std::cin >> number2;

    int sum = add(number, number2);
    std::cout << "Sum: " << sum << std::endl;

    Calculator calc;
    int product = calc.multiply(number, number2);
    std::cout << "Product: " << product << std::endl;

    //std::cout << "You entered: " << number << std::endl;
    return 0;
}