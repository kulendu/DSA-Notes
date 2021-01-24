#include <stdio.h>
int main(){
    int arr[10],i,n;
    
    // Entering the array size:
    printf("enter the size of the array : \n");
    scanf("%d", &n);

    // Entering the elements:
    printf("Enter the array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // traversing the array:
    printf("The elements are :");
    for(int i=0; i<n; i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}