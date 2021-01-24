#include<iostream>
using namespace std;


// function with no arguments and no return types 
// for function with return types use 'int' and for no return types we use 'void'
void sum()
{
    int a,  b,  c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"\nEnter the second number:";
    cin>>b;
    c = a + b;
    cout<<"\nThe sum is: "<<c;
}

int main()
{
    sum();
    return 0;   // return 0 means exectuing all the prog. without any problems
}


