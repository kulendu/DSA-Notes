#include<iostream>
using namespace std;

class A
{
    public:
    A() //constructor
    {
        cout<<"Constructor is called\n";
    }

    ~A()    //destructor is called
    {
        cout<<"Destructor is called\n";
    }
};

int main(){
    A obj1; //constructor called
    int X = 1;
    
    if(X){
        A obj2; //constructor called
    }   //destructor called for obj2
}   // destructor called for obj1
