#include<stdio.h>

int main()
{
    int arr1[5][5], arr2[5][5], row, col, sum[5][5];
    printf("Enter the rows :");
    scanf("%d", &row);
    printf("\nEnter the columns: ");
    scanf("%d", &col);

    printf("\nEnter the elements of first matrix: ");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("\nEnter the elements of second matrix: ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nSum of two matrices: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            printf("%d  ", sum[i][j]);
        }
    }
    
    return 0;


}