#include<iostream>
using namespace std;

//declaring the class
class Student{  //className -> Student
    public:             //access specifier
    string studentName; //data members
    void printName()    //member function
    {    
        cout<<"The name of the student is:";
        cin>>studentName;
    }
};


int main()
{
    //declare object for class Students
    Student student1;
    student1.studentName;   //accessing the data members
    student1.printName();               //accessing the member function

    return 0;
}