#include<iostream>
using namespace std;

// function with arguments and with return types
int add(int a, int b)
{
    int c;
    c = a + b;

    return c;
}


int main(){

    int num1, num2;
    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
    cout<<"\n\nThe result is:"<<add(num1, num2);

    return 0;
}