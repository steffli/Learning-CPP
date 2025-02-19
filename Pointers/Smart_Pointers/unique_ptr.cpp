#include <iostream>
#include <memory>

/*
Unique Pointers
std::unique_ptr is used to manage single objects or arrays
It works on the concept of exclusive ownership -> one unique pointer owns one object at a time
Can be transferred or moved but not shared or copied

Prevents issues of dangling pointers, reduces memory leaks and eliminates manual memory management
If the unique pointer goes out of scope it automatically deletes the object
*/
struct Deletion{
    void operator()(int *ptr)
    {
        std::cout << "Deleting Pointer" <<std::endl;
        delete ptr;
    }
};

int main()
{
    std::unique_ptr<int> ptr1(new int(5));
    std::unique_ptr<int> ptr2 = std::make_unique<int>(10); //Preferred in C++14 onwards

    //transfer ownership
    std::unique_ptr<int> ptr3 = std::move(ptr1); //moves ownership of ptr1 to ptr3

    std::cout << *ptr3 << ", " << *ptr2 << std::endl;

    std::unique_ptr<int, Deletion> ptr4(new int(5), Deletion());
    return 0; //if ptr3 goes out of scope Deletion will be called
}