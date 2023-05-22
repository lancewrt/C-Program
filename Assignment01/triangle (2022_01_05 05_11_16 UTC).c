//This will calculate the area of a triangle.

#include <stdio.h>

int main()
{
   float base,height,area;

   printf("Enter the Base: ");
   scanf("%f", &base);
   printf("Enter the Height: ");
   scanf("%f", &height);
   area = 0.5*base*height;
   printf("The Area is %.2f", area);

}
