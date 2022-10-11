#include <iostream>

class myClass
{
private:
    int y;
public:
    int x;
};

class myClass2{
    int z;  //the default access modifier if not declare private or public is private
};

int main(int argc, char const *argv[])
{
    myClass myObj;
    //the variable with private variable cannot be access
    //this is because private variable can only be access by the class it is on
    //myObj.y = 32;
    myObj.x = 13;//the variable can be access because it has public access specifier
    return 0;
}
