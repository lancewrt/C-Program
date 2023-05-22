#include <stdio.h>
#include <stdlib.h>

int main()
{
    start:
    system("cls");
    int input, year;
    char again;
    printf("Enter a Year: ");
    scanf("%i", &input);

    if((input%4 == 0) && (input%100 != 0) || (input%400 == 0))
    {
        printf("%i is a leap year", input);
    }
    else if(input < 999)
    {
        printf("Please enter a valid year");
        printf("\nDo you want to try again? \nPress 'y' if yes and 'n' to exit.");
        again = getch();
        if(again == 'y' || again == 'Y')
            goto start;
        else
            exit(0);
    }
    else
    {
        printf("%i is not leap year", input);
    }
    printf("\nDo you want to try again? \nPress 'y' if yes and 'n' to exit.");
    again = getch();
    if(again == 'y' || again == 'Y')
        goto start;
    else
        exit(0);

    return 0;
}
