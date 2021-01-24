#include<stdio.h>
int main(){
    // declaration of array:
    int marks[5] = {10,20,30,40,50};

    // using for loop access the elements
    for(int i=0; i<5; i++){
        printf("The marks are: %d \n", marks[i]);
    }
    return 0;

}
