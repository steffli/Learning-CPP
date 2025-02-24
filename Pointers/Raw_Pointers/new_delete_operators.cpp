#include <iostream>

/*
New and delete operators
low-level construct that holds a memory address used to manually allocate space on the heap

*/

int main()
{

//'new' allocates memory on the heap and remains until you explicitly deallocate 
//using delete operator.
int *ptr = new int; //dyanmic allocation on the heap
*ptr = 42;


//'delete' deallocates memory, after deallocations its avaiable for reallocation 
//failing to deallocate memory can lead to memory leaks
int *ptr1 = new int;
*ptr1 = 42;
delete ptr1;


//new[] and delete[] are used for allocation and deallocation memory for array of objects
int n = 10;
int *arr = new int[n];
for (int i = 0; i < n; i++)
{
    arr[i] = i;
}
delete [] arr;
}