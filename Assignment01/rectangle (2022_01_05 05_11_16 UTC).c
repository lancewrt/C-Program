//This will calculate the area of a rectangle.

#include <stdio.h>

int main()
{
   float length,width,area;

   printf("Enter the Length: ");
   scanf("%f", &length);
   printf("Enter the Width: ");
   scanf("%f", &width);
   area = length*width;
   printf("The Area is %.2f", area);

   return 0;
}
