#include <iostream>

class car
{
public:
    double speed(int distance,double time)
    {
        double speed = distance/time;
        return speed;
    }
};

int main(int argc, char const *argv[])
{
    car myCar;

    std::cout<<"My Car Speed: "<<myCar.speed(123,2.3)<<"km/h";
    return 0;
}
