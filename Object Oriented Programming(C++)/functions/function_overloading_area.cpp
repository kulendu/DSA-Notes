#include<iostream>
using namespace std;

float area(float radius)
{
    return (3.14 * radius * radius);
}

int area (int l, int b){
    return (l * b);
}

int area(int side){
    return (side * side);
}

int main(){
    cout<<"The area of circle of radius 10 is:"<<area(10)<<endl;
    cout<<"The area of rectangle of length 10 and breadth 20 is:"<<area(10, 20)<<endl;
    cout<<"The area of square of side 10 is:"<<area(50)<<endl;

    return 0;
}