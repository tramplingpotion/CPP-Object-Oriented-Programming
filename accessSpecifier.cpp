#include <iostream>

class myClass
{
protected:
    int w;

private:
    int y;

public:
    int x;

public:
    int getY()
    {
        return y;
    }

public:
    void setY(int y2)
    {
        y = y2;
    }
};

class myClass2 : public myClass
{
    int z; // the default access modifier if not declare private or public is private

public:
    int getW()
    {
        return w;
    }

public:
    void setW(int w2)
    {
        w = w2;
    }
};

int main(int argc, char const *argv[])
{
    myClass myObj;
    myClass2 myObj2;
    // the variable with private variable cannot be access
    // this is because private variable can only be access by the class it is on
    // can be access if using encapsulation(setter and getter)
    myObj.setY(32);
    myObj2.setY(32);    //remember that public method(setY) can also be called from parents if it is their child

    // protected variable will be able to be access by child from inheritance using encapsulation
    myObj2.setW(42);

    myObj.x = 13; // the variable can be access because it has public access specifier
    return 0;
}
