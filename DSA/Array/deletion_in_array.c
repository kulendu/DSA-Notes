#include<stdio.h>
int main(){
    
    int arr[100], size, n, i, pos;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);

    printf("Enter the elements :\n");
    for(i=0;i<size; i++){
        scanf("%d", &arr[i]);
    }

    //for deleting the elements :
    printf("Enter the position at which u want to delete:\n");
    scanf("%d", &pos);
    //conditions for deletion check
    if(pos >= size+1){
        printf("Deletion not possible\n");
    }
    else{
        for(i=pos; i<size; i++){
            arr[i] = arr[i+1];
        }
    }

    printf("the array after deletion of element from position %d is :\n", pos);
    for(i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }


    return 0;

}
