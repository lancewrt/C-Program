//This will calculate the area of a parallelogram.

#include <stdio.h>

int main()
{
   float base,height,area;

   printf("Enter the Base: ");
   scanf("%f", &base);
   printf("Enter the Height: ");
   scanf("%f", &height);
   area = base*height;
   printf("The Area is %.2f", area);

   return 0;
}
