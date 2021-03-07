#include<iostream>
using namespace std;

template<class T>   //declaring template function
T sum(T n1, T n2){
    T n3 = n1 + n2;
    return n3;
}

int main()
{
    int a=10025, b=20, c;
    c = sum(a,b);   //calling template function
    cout<<"The sum is: "<<c;
    return 0;
}