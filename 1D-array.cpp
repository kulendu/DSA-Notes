#include<iostream>
using namespace std;

class singleDimesionArray
{
    int arr[5],i;
    public:
        void array();
        void display();    
};

void singleDimesionArray::array(){
    cout<<"Enter the number of elements in the array:";
    for(i=0; i<10;i++){
        cin>>arr[i];
    }
}

void singleDimesionArray::display(){
    cout<<"The elements in  the array are:";
    for(i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    singleDimesionArray arr1;
    arr1.array();
    arr1.display();

    return 0;
}