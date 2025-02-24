#include <iostream>
#include <memory>
/*
Memory Leakage
occurs when a program allocates memory in the heap but does not release the memory back to the OS
This leads to exhaustion of avaiable memory resulting in low system performance or crashes

Manual allocation and deallocation of memory! 
*/

void create_memory_leak()
{
    int *ptr = new int [100];
}//ptr goes out of scope, memory block is allocated but not deallocated


//to avoid leaks always ensure to deallocate memory before pointer goes out of scope or is reassigned
//e.g. unique_ptr and shared_ptr, RAII, can be used to handle memory allocation internally
void no_memory_leak()
{
    std::shared_ptr<int[]> ptr = std::shared_ptr<int[]>(new int[100], std::default_delete<int[]>());
}//shared_ptr goes out of scope and will automatically be deallocated
//shared_ptr is not suited for arrays therefore requires a custom deleter to delete array if no longer needed