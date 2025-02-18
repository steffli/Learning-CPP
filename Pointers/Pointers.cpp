#include <iostream>
#include <unistd.h>

/*
Pointers
A variable that stores memory address of another variable. It points to the memory locations and allows to access
or modify value indirectly
*/

void put_str(const char *str);

void put_str(const char *str)
{
    int i = 0;
    while(*str)
    {
        //references cannot be changed to refer to another variable
        write(1, str, 1);
        str++;
    }
};

int main()
{
    const char *str = "Hello world";
    //char *ptr = &str; pointer stores the memory address

    //defince function pointer that returns void, input is of type string
    auto (*funcptr) (const char *) = put_str;
    funcptr(str);
    return 0;
}