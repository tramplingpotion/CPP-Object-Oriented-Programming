// encapsulation using setter and getter like in java
// it is use to hide the sensitive data from user
// because we are trying to access and set the value of private variable
#include <iostream>

class Employee
{
private:
    int salary;
    int fulltime;
    int overtime;

public:
    int getSalary()
    {
        return salary;
    }

    void setSalary(int fulltime,int overtime)
    {
        salary = fulltime + overtime;
    }
};

int main(int argc, char const *argv[])
{
    Employee myEmployee;
    myEmployee.setSalary(2100,456);
    std::cout<<"My salary is: RM"<<myEmployee.getSalary();
    return 0;
}
