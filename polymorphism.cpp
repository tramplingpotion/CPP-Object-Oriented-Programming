//poly means many
//morph means shape
//polymorph in oop is function with same name from different class
//can only be acheive through inheritance

#include <iostream>

class Animal
{
private:
public:
    void sound()
    {
        //this is the default sound function content
        std::cout << "This animal Make sound." << std::endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        //because sound function is different than from parent class, 
        //it will override and use this instead of from the parent class
        std::cout << "Woff Woff" << std::endl;
    }
};

class Fox : public Animal
{
    //sound function will have same output as the parent class because it is not set to be different here
};

class Wolf : public Animal
{
public:
    void sound()
    {
    std::cout << "Oouuu" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Dog myDog;
    Fox myFox;
    Wolf myWolf;

    myDog.sound();
    myFox.sound();
    myWolf.sound();
    return 0;
}
