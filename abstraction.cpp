// abstraction is meant to be the base class
// which means it only populated with empty class and variable that will be filled by child

#include <iostream>

struct Shape
{
    // base class for abstraction
    // the virtual function makes the class abstract and cannot create object in main class
    virtual double area() = 0; 

    void setHeight(double h)
    {
        height = h;
    }

    void setWidth(double w)
    {
        width = w;
    }

    void setRadius(double r)
    {
        radius = r;
    }

protected:
    double height;
    double width;
    double radius;
};

struct Square : public Shape
{
    double area()
    {
        return height * width;
    }
};

struct Circle : public Shape
{
    double area()
    {
        return 3.14 * (radius * radius);
    }
};

int main(int argc, char const *argv[])
{
    Circle myCircle;
    myCircle.setRadius(13);
    std::cout << "Circle area: " << myCircle.area() << std::endl;

    Square mySquare;
    mySquare.setHeight(34);
    mySquare.setWidth(12);
    std::cout << "Square area: " << mySquare.area() << std::endl;

    return 0;
}
