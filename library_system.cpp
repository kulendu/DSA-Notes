#include<iostream>
using namespace std;

class Books
{
    char book_title;
    float price;
    public:
        void input();
        void display();
};

void Books::input(){
    cout<<"Title :";
    cin>>book_title;
    cout<<"\nPrice :";
    cin>>price;
}

void Books::display(){
    cout<<"\nTitle: "<<book_title;
    cout<<"\nPrice: "<<price;
}

int main()
{
    const int size = 3;
    Books book[size];
    for(int i=0; i<size; i++){
        cout<<"Enter details of book"<<(i+1)<<"\n";
        book[i].input();
    }
    for(int i=0; i<size; i++){
        cout<<"Book: "<<(i+1)<<"\n";
        book[i].display();
    }

    return 0;
}