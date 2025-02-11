#include <iostream>
#include <any>
/*
Dynamic Typing
Data types of variables are normally determined during compile time.
Dynamic typing determines data types of variables during runtime.
*/

//void* pointers can point to objects of any data type and used to store reference to any type without
//knowing any th specific type of the object

int main()
{
    int a = 42;
    float b = 3.14f;
    std::string s = "Hello world";

    void *void_pt;

    void_pt = &a;
    std::cout << "int value: " << *(static_cast<int*>(void_pt)) << std::endl;

    void_pt = &b;
    std::cout << "float value: " << *(static_cast<float*>(void_pt)) << std::endl;

    void_pt = &s;
    std::cout << "string value: " << *(static_cast<std::string*>(void_pt)) << std::endl;

    //both have perfmance implications due to additional checking
    std::any any_val;
    any_val = 42;
    std::cout << "int value: " << std::any_cast<int>(any_val);
}