#include <iostream>

/*
Memory Model in C++
defines how the program stroes and accesses data in computer memory. It consists of different segments such as
Stack, Heap, Data and Code Segments. Each segment is used to store different types of data.
*/

//Stack Memory: automatic storage, local variables and function call data. Managed by compiler 
//-> allocation and deallocation done automatically. Last in First Out data structure 
//-> most recent data is deallocated first

void funcExample()
{
    int x =5;
}

//Heap Memory: dynamic storage of objects using 'new' and 'delete' keyword. 
//Programmer has control over allocation and deallocation. Larger pool of memory than stack but slower access.

void functionExample()
{
    int *p = new int;
    *p = 10;
    delete p;
}

//Data Segment: consists of two parts(initialized and uninitialized data segment)
//-> initialized stores global, static and constant variables with initial values
//-> unitialized stored uninitialized global and static variables

int main()
{
    int globalVar = 5;
    static int staticVar = 5;
    const int constVar = 5;

    int globVar; //unitintialized
}

//Code Segment(Text Segment): stores executable code of the program, located in a read-only area of memory to 
//prevent modification
