#include <iostream>
using namespace std;

// base class
class Employee
{
    public:
    int id;
    float salary;
        Employee(int inpID)
        {
            id = inpID;
            salary = 50.0;
        }
        Employee(){}
};

// derived class
class programmer : public Employee {
    public:
    programmer(int inpID){
        id = inpID;
    }
    int proglang = 19;   
};


int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skill1(1);
    cout<<skill1.proglang<<endl;
    return 0;
}