#include<iostream>
using namespace std;

void swap(int a , int b){
    int c;

    c = a;
    a = b;
    b = c;

    cout<<" "<<a<<"   "<<b;
}

int main(){
    int a, b, c;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"The numbers after swapping are:";
    swap( a,  b);

    return 0;
}