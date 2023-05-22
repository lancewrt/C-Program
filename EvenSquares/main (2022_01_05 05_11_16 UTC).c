#include <stdio.h>
#include <stdlib.h>


int main()
{
    start:
    system("cls");
    int input, squares;
    char again;
    printf("Enter a number to find even perfect square/9s: ");
    scanf("%i", &input);
    if(input < 4)
    {
        printf("There is no perfect square");
        printf("\nDo you want to try again? \nPress 'y' if yes and 'n' to exit.");
        again = getch();
        if(again=='y' || again=='Y')
            goto start;
        else
            exit(0);
    }
    printf("\nThe perfect square is/are:");
    for(squares=2; squares*squares <= input; squares+=2)
    {
        printf(" %i,", squares*squares);
    }
    printf("\nDo you want to try again? \nPress 'y' if yes and 'n' to exit.");
    again = getch();
    if(again=='y' || again=='Y')
        goto start;
    else
        exit(0);

    return 0;
}

