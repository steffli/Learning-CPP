#include <iostream>
#include <memory>

/*
Weak Pointer
smart pointer that add level of indirection and safety to raw pointer.
Used to break reference cycles where two objects have a shared pointer to each other

Unlike shared_ptr it does not increase reference counter.
It maintain two counts:
1. number of shared_ptr(ownership count)
2. number of weak_ptr(weak count)
Object is destroyed once shared_ptr is destroyed or reset even if weak_ptr is still referencing an object.
Control Block itself is not deallocated until both counters reach 0, allowing weak_ptr
to safely detect whether an object has been deleted

To use weak_ptr shared_ptr has to be deleted using lock() that tries to create a new shared_ptr
that shares ownership of the object.
*/

class Custom{
    public:
    void dummy()
        {
            std::cout << "Do something... \n";
        }
};

int main()
{
    std::weak_ptr<Custom> weak;
    {
        std::shared_ptr<Custom> shared = std::make_shared<Custom>();
        weak = shared;

        if(auto shared_Weak = weak.lock())
        {
            shared_Weak->dummy();
            std::cout << "Shared count: " << shared_Weak.use_count() << '\n'; 
        }
    }

    if(auto shared_Weak = weak.lock())
    {
        //not executed because object is destroyed
    }
    else
    {
        std::cout << "Object has been destroyed\n";
    }
    return 0;
}