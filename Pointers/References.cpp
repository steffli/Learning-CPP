#include <iostream>

/*
References
can be considered costant pointer which always points to the reference. They are declared using '&'
*/


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num = 10;
    int &ref = num;

    //use reference just as original variable, if you change value of reference the original also changes
    //since both share the same memory address
    num = 20;
    std::cout << ref << std::endl;
    ref = 30;
    std::cout << num << std::endl;

    int a = 5;
    int b = 3;
    swap(a,b);
    std::cout << "Swapped values:\n" << a << "\n" << b << std::endl;

}