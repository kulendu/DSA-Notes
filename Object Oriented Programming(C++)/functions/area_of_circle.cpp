#include<iostream>
using namespace std;

int area_of_circle(float);  //function prototype 

int main(){
    float radius, area;
    cout<<"Enter the radius of the Circle:";
    cin>>radius;
    cout<<"\nArea of the Circle is "<<area_of_circle(radius);
}

int area_of_circle(float radius){
    float area = 3.14 * radius * radius;

    return area;
}