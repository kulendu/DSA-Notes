#include<iostream>
using namespace std;

class student
{

    int a;
    public:
    void input();

};

void student::input()
{

    cout<<"enter a no";
    cin>>a;

}

int main()
{

    student std;
    std.input();

}