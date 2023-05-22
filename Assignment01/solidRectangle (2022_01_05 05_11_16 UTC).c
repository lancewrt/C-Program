//This will calculate the volume of solid rectangle.

#include <stdio.h>

int main()
{
    float length,width,height,volume;

    printf("Enter the Lenght: ");
    scanf("%f", &length);
    printf("Enter the Width: ");
    scanf("%f", &width);
    printf("Enter the Height: ");
    scanf("%f", &height);

    volume = length*width*height;
    printf("The Volume is: %.2f", volume);

    return 0;


}
