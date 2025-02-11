#include <iostream>
#include <typeinfo>

/*
Run Time Type Identification
type information of object during program execution. Usefule for dynamic typing 
*/

//typeid return reference to an object of type std::type_info with information about the type of object

//dynamic_cast performs runtime type check and downcasts a pointer or reference to a derived pointer or ref.
//It returns null or throws bad_cast exception when the casting fails

class Base{virtual void dummy(){}};
class Derived1 : public Base{};
class Derived2 : public Base{};

int main()
{
    Base *base_pt = new Derived1;

    std::cout << "Type " << typeid(*base_pt).name() << '\n';

    Derived1 *derived1_ptr = dynamic_cast<Derived1*>(base_pt);
    if (derived1_ptr) {
        std::cout << "Downcast to Derived1 successful\n";
    }
    else {
        std::cout << "Downcast to Derived1 failed\n";
    }

    Derived2 *derived2_ptr = dynamic_cast<Derived2*>(base_pt);
    if (derived2_ptr) {
        std::cout << "Downcast to Derived2 successful\n";
    }
    else {
        std::cout << "Downcast to Derived2 failed\n";
    }

    delete base_pt;
    return 0;
}

