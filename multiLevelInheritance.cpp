//can access grandparent function if they are link through inheritance

#include <iostream>

class Me
{
public:
    void species(){
        std::cout<<"I am a human";
    }
};

class Child: public Me{

};

class GrandChild: public Child{

};

int main(int argc, char const *argv[])
{
    GrandChild descendant;
    descendant.species();
    return 0;
}
