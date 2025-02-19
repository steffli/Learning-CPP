#include <iostream>
#include <memory>

/*
Shared Pointer
allows multiple pointer to share ownership of dynamically allocated object.
Object will automatically deallocated when shared_pointer is destroyed

Every time a shared_ptr is created the reference counter is incremented, decremented when out of scope
Once the counter reaches 0 the system will clean up the memory.
*/

class Custom{
    public:
        Custom(){std::cout << "Constructor called" << std::endl;}
        ~Custom(){std::cout << "Destrutor called" << std::endl;}
};

int main()
{
    std::shared_ptr<Custom> ptr1(new Custom());

    {
        //shared pointer with previous pointer
        //both pointers share the same object, reference counter = 2
        std::shared_ptr<Custom> ptr2 = ptr1;
        std::cout << "Inside inner scope" << std::endl;
    }
    //leaving inner scope ptr2 will be destroyed, reference counter = 1
    std::cout << "Outside inner scope" << std::endl;

    //after main function ptr1 goes out of scope, reference counter = 0
    //-> Custom object is deleted and destructor is called
}