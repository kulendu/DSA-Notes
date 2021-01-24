#include <stdio.h>
int main(){
    int arr[100],element,size, searched_element;
     
    // Entering the array size:
    printf("enter the size of the array : \n");
    scanf("%d", &size);

    // Entering the elements:
    printf("Enter the array elements: \n");
    for(element=0; element<size; element++){
        scanf("%d", &arr[element]);
    }

    printf("the array is:\n");
    for(element=0; element<size; element++){
        printf("%d\n", arr[element]);
    }

    //conditions for searching:
    printf("Enter the element to be searched: \n");
    scanf("%d", &searched_element);

    for(element=0; element<size; element++){
        if(searched_element == arr[element]){
            printf("Item found at index %d\n", element);
            break;
        }

    }
    if(element == size){
        printf("Element  not found");
    }

    
    return 0;
}