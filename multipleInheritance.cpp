//inheritance from multiple parents class to one child class

#include <iostream>

class Tiger
{
public:
    void Sound()
    {
        std::cout << "Rawr" << std::endl;
    }
};

class Lion
{
public:
    void Trait()
    {
        std::cout << "Social Trait" << std::endl;
    }
};

//liger class derived from multiple parents
class Liger : public Tiger, public Lion
{
};

int main(int argc, char const *argv[])
{
    Liger myLiger;

    //can use functions and variable from both classes 
    
    myLiger.Sound();
    myLiger.Trait();
    return 0;
}
