#include <iostream>

/*
Object Lifetime: time during which an object exists and is classified into four categories
1. Static Storage Duration
2. Thread Storage Duration
3. Automatic Storage Duration
4. Dynamic Storage Duration
*/
//Static Storage: exists for the entire run of the program. Allocated at beginning and deallocated upon termination
//e.g. Gloabal variables, static data members and static local variables

int global_var;
class Car{
    static int fuel;
};

void check_fuel()
{
    static int fuel;
}


//Thread Storage: exists for the lifetime of the thread they belong to. Created when thread starts and destroyed
//when thread exits. Specified using 'thread_local'

thread_local int my_var;


//Automatic Storage: created at point of definition and destroyed when the scope is exited. 
//These Objects are known as local or stack objects. 
//e.g. Function parameters and local non-static variables

void my_Function()
{
    int local_var;
}


//Dynamic Storage: created at runtime using memory allocation (new, malloc). Lifetime managed manually
//need to be handled manually using 'delete' or 'free' when they are not needed to avoid memory leaks.

int main()
{
int *ptr = new int;
delete ptr;
}