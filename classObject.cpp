// a car is an object
// weight and color is the attribute
// steering and brake is the methods

#include <iostream>

class myClass
{
public:
    int myInt;
    std::string myString;
};

int main(int argc, char const *argv[])
{
    myClass myObj; // object of myClass

    // access and set attribute values
    myObj.myInt = 12;
    myObj.myString = "Hello World";

    // displaying the changes made
    std::cout<<myObj.myString;

    return 0;
}
