//This will calculate the area of a trapezoid.

#include <stdio.h>

int main()
{
   float base1,base2,height,area;

   printf("Enter the Base 1: ");
   scanf("%f", &base1);
   printf("Enter the Base 2: ");
   scanf("%f", &base2);
   printf("Enter the Height: ");
   scanf("%f", &height);

   area = (base1+base2)/2*height;
   printf("The Area is %.2f", area);

}
