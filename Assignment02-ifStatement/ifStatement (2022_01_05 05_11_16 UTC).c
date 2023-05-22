#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("\t Menu \n");
    printf("1. Area of a Rectangle\n");
    printf("2. Area of a Triangle\n");
    printf("3. Area of a Trapezoid\n");
    printf("4. Area of a Parallelogram\n");
    printf("5. Volume of a Solid Rectangle\n");
    printf("\nWhat do you want to calculate? Pick the number:");
    scanf("%i", &number);

    if (number == 1)
    {
        printf("\nYou Picked the Area of a Rectangle.\n");

        float length, width, area;

        printf("Enter the Length: ");
        scanf("%f", &length);
        printf("Enter the Width: ");
        scanf("%f", &width);
        area = length*width;
        printf("\nThe Area is %.2f\n", area);
    }

    else if (number == 2)
    {
        printf("\nYou Picked the Area of a Triangle.\n");

        float base,height,area;

        printf("Enter the Base: ");
        scanf("%f", &base);
        printf("Enter the Height: ");
        scanf("%f", &height);
        area = 0.5*base*height;
        printf("\nThe Area is %.2f\n", area);
    }

    else if (number == 3)
    {
        printf("\nYou Picked the Area of a Trapezoid.\n");

        float base1,base2,height,area;

        printf("Enter the Base 1: ");
        scanf("%f", &base1);
        printf("Enter the Base 2: ");
        scanf("%f", &base2);
        printf("Enter the Height: ");
        scanf("%f", &height);
        area = (base1+base2)/2*height;
        printf("\nThe Area is %.2f\n", area);
    }

    else if (number == 4)
    {
        printf("\nYou Picked the Area of a Parallelogram.\n");
        float base,height,area;

        printf("Enter the Base: ");
        scanf("%f", &base);
        printf("Enter the Height: ");
        scanf("%f", &height);
        area = base*height;
        printf("\nThe Area is %.2f\n", area);
    }

    else if (number == 5)
    {
        printf("\nYou Picked the Volume of a Solid Rectangle.\n");

        float length,width,height,volume;

        printf("Enter the Lenght: ");
        scanf("%f", &length);
        printf("Enter the Width: ");
        scanf("%f", &width);
        printf("Enter the Height: ");
        scanf("%f", &height);
        volume = length*width*height;
        printf("\nThe Volume is: %.2f\n", volume);
    }

    else if (number != 1, 2, 3, 4, 5)
    {
        printf("\nPick only the numbers in the menu!\n");
    }


    return 0;
}
