#include <iostream>

/*
Bitwise operations
manipulate the bits of a number for optimizing algorithms and manipulating memory in lower-level programming
takes numbers and compares them bit by bit: if bit in both numbers are set (1) otherwise the bit is unset (0)

Note: bitand and bitor are reserved keywords. Do not use!
*/


class Comparator
{
    public:
    int bit_and(int a, int b)
    {
        return a & b;
    }
    int bit_or(int a, int b)
    {
        return a | b;
    }
    int bit_xor(int a, int b)
    {
        return a ^ b;
    }
    int bit_not(int a)
    {
        return ~a;
    }
    int bit_ls(int a, int b)
    {
        return a << b;
    }
    int bit_rs(int a, int b)
    {
        return a >> b;
    }
};


int main()
{
    int a = 5;
    int b = 3;

    Comparator comp;
    int bit_and_result = comp.bit_and(a,b);
    int bit_or_result = comp.bit_or(a,b);
    int bitxor = comp.bit_xor(a,b);
    int bitnot = comp.bit_not(a);
    int bitls = comp.bit_ls(a,1);
    int bitrs = comp.bit_rs(a,1);

    std::cout << bit_and_result << std::endl;
    std::cout << bit_or_result << std::endl;
    std::cout << bitxor << std::endl;
    std::cout << bitnot << std::endl;
    std::cout << bitls << std::endl;
    std::cout << bitrs << std::endl;
}

