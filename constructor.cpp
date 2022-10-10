#include <iostream>

class car
{
public:
    std::string brand;
    std::string model;
    int year;
    car(std::string x, std::string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
    //the commented part of the code is constructor definition outside class
    //car(std::string x, std::string y, int z);
};

// car::car(std::string x, std::string y, int z)
// {
//     brand = x;
//     model = y;
//     year = z;
// }

int main(int argc, char const *argv[])
{
    car myCar1("BMW", "Cheetah", 1993);
    car myCar2("Proton", "Preve", 2016);

    std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << std::endl;
    std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << std::endl;

    return 0;
}
