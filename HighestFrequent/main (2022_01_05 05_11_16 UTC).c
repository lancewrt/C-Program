#include <stdio.h>
#include <stdlib.h>

int main()
{
    start:
    system("cls");
    int numberOfInput, numbers, first, frequent = 0, biggest, max;
    char again;
    printf("\nNumber of integers to enter: ");
    scanf("%i", &numberOfInput);
    system("cls");
    for(numbers=1; numbers<=numberOfInput; ++numbers)
    {
        printf("\nEnter the Number/s:");
        scanf("%i", &first);
        if(first > biggest)
        {
            biggest = first;
            max = biggest;
            frequent = 1;

        }
        else if(first == biggest)
        {
            frequent++;
        }
    }
    printf("\nThe highest is %i and appeared %i times", max, frequent);
    printf("\nDo you want to try again? \nPress 'y' if yes and 'n' to exit.");
    again = getch();
    if(again == 'y' || again == 'Y')
        goto start;
    else
        exit(0);
    return 0;

}
