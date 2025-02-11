#include <iostream>
#include <string>

/*
Data Types
categorizing different types of data, important for memory allocation
*/

int main()
{
    int num = 42; //short int, long int, long long int
    float pi = 3.14f; //4 bytes of memory
    double pi_extend = 3.1415926535; //consumes 8 bytes of memory
    char c = 'A';
    bool is_true = true;

    int numbers[5] = {1, 2, 3, 4, 5};
    int *number = &numbers[0]; //pointers store memory address of variable
    int &numRef = num; //references share memory locations between variables, allows to create an alias to another variable

    //structs are used to store multiple data types under a single variable 
    struct Car 
    {
        std::string name;
        std::string color;
        float fuel;
    };
    Car car = {"Porsche", "Red", 30.5};
    std::cout << car.name << std::endl;

    //classes are similar to structs but accessibility of member data and function are provate/public
    class Person
    {
        public:
        std::string name;
        int age;

        void printInfo()
        {
            std::cout << "Name: " << name << ", Age: " << age << std::endl;
        };
    };
    Person p1;
    p1.name = "Steve Winter";
    p1.age = 18;
    p1.printInfo();

    //Union stores different data types in the same memory location
    union Data
    {
        int num;
        char c;
        float decimal;
    };
    Data myData;
    myData.num = 42;
    std::cout << myData.num << std::endl;
}