#include <stdio.h>
using namespace std;


// function with no return types but with return types
void area(int square_side)
{
  int square_area;
  square_area = square_side * square_side;
  printf("Area of Square = %d",square_area);
}

int main()
{
  int square_side;
  printf("Enter the side of square :");
  scanf("%d",&square_side);
  area(square_side);   //function call

  return 0;
}
