#include<iostream>
using namespace std;

// function with no arguments but with return types
int sub()
{
    int a,b,c;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    c = a - b;

    return c;
}


int main(){
    int minus;
    minus = sub();  // calling the function
    cout<<"\n\nThe result is:"<<minus;

    return 0;
}