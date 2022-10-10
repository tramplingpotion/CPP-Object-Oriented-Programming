#include <iostream>

class myClass
{
public:
    void myMethod()
    {
        std::cout << "Hello World";
    }
};

int main(int argc, char const *argv[])
{
    myClass myObj;
    myObj.myMethod();
    return 0;
}
