#include<iostream>
using namespace std;

// here for instance we are taking the number 121
void palindrome(){
    int orig_num, temp_num, digit, rev = 0;

    cout<<"Enter the number to be checked:";
    cin>>orig_num;  //121
    temp_num = orig_num;    //temp_num = 121

    while(orig_num != 0){   // orig_num != 0, which is true

        digit = orig_num % 10;  //digit= 121%10 = 1
        rev = (rev * 10) + digit;   // rev = (0*10)+1 = 1
        orig_num = orig_num/10; // orig_num = 121/10 = 12
    }

    if(temp_num == rev){
        cout<<""<<temp_num<<" is palindrome";
    }else{
        cout<<""<<orig_num<<" is not palindrome";
    }

}

int main(){
    palindrome();

    return 0;
}