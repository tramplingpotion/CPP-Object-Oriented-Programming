// child can access all public content from its parent class
#include <iostream>

class Vehicle
{
public:
    std::string brand = "Ford";
    void honk()
    {
        std::cout << "Honk! Honk!" << std::endl;
    }
};
class Car : public Vehicle
{
public:
    std::string model = "Mustang";
};

int main(int argc, char const *argv[])
{
    Car myCar;
    myCar.honk();
    std::cout << "My Car: " << myCar.brand << " " << myCar.model;
    return 0;
}
