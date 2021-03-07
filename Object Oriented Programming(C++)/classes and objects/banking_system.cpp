#include<iostream>
using namespace std;

class Bank
{
    char depositor_name[30], type[10];
    int account_no, balance;

    public:
    void assign_value()
    {
        cout<<"Enter your name: "<<endl;
        cin>>depositor_name;
        cout<<"\nEnter your account number"<<endl;
        cin>>account_no;
        cout<<"\nEnter your account type:"<<endl;
        cin>>type;
        cout<<"\nEnter your balance: "<<endl;
        cin>>balance;
    }

    void deposit()
    {   int credit;
        cout<<"\nEnter your deposit amount:"<<endl;
        cin>>credit;

        balance = balance + credit;
    }

    void withdraw()
    {
        int debit;
        cout<<"\nEnter your withdrawl amount(in INR):"<<endl;
        cin>>debit;

        if(debit >= balance){
            cout<<"\nInsufficient Balance";
        }else{
            balance = balance - debit;
            cout<<"\nYour balanace after withdrawl of "<<debit<<" is:"<<balance;
        }
    }

    void display()
    {
        cout<<"\nName:"<<depositor_name;
        cout<<"\n\nBalance (INR):"<<balance;
    }

};


int main()
{
    Bank customer[10];
    int users;
    cout<<"\nEnter the number of users:";
    cin>>users;

    for(int i=0; i<=users; i++)
    {
        customer[i].assign_value();
        customer[i].deposit();
        customer[i].withdraw();
        customer[i].display();
    }

    cout<<"\n\n";
    return 0;

}