#include<iostream>
using namespace std;

class multiDimesionArray
{
    int arr[2][3],i,j;
    public:
        void input();
        void display();    
};

void multiDimesionArray::input(){
    cout<<"Enter the number of elements in the array:";
    for(i=0; i<2;i++){
        for(j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
}

void multiDimesionArray::display(){
    cout<<"The elements in  the array are:";
    for(i=0; i<2;i++){
        for(j=0; j<3; j++){
            cout<<arr[i][j]<<endl;
        }
    }
}

int main()
{
    multiDimesionArray arr1;
    arr1.input();
    arr1.display();

    return 0;
}