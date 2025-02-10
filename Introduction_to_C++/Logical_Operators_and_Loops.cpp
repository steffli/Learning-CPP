#include <iostream>
/*
Logical Operators
test relationship between different variables or values, return boolean value True(1) or False(0)

Loops in C++
essential concept in programming to execute code until a condition is met.
*/

class Comparator
{
    public:
    bool and_op(int a, int b)
    {
        if(a > 0 && b > 0)
        return 1;
    return 0;
    }

    bool or_op(int a, int b)
    {
        if(a > 0 || b > 0)
        return 1;
    return 0;
    }

    bool not_op(int a, int b)
    {
        if(!(a == b))
        return 1;
    return 0;
    }

};


int main()
{
    int a = 5;
    int b = -2;

    Comparator comp;
    int compare_and = comp.and_op(a,b);
    int compare_or = comp.or_op(a,b);
    int compare_not = comp.not_op(a,b);

    for(int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
    }

    int i = 0;
    while(i < 5)
    {
        std::cout << i << std::endl;
        i++;
    }
    i = 0;
    do{
        std::cout << i << std::endl;
        i++;
    } while(i < 5);

    std::cout << compare_and << std::endl;
    std::cout << compare_or << std::endl;
    std::cout << compare_not << std::endl;

    return 0;
}