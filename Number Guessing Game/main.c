#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, guess, j, a;
    char y;
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    start:
    system("cls");
    printf("GUESS THE NUMBER FROM 1-20.\n");

    for(i=0; i <= 5; ++i)
    {
        j = 5-i;
        printf("YOU HAVE %i TRIES LEFT!\n", j);
        printf("ENTER YOUR GUESS:");
        scanf("%i", &guess);

        if(guess == randomNumber)
        {
            printf("CORRECT! GOOD JOB\n");
            printf("DO YOU WANT TO PLAY AGAIN? PRESS 'Y' IF YES AND 'N' TO EXIT.");
            y = getch();
            if(y == 'y' || y == 'Y')
            {
                goto start;
            }
            break;
        }
        else if(guess > randomNumber)
        {
            system("cls");
            printf("YOUR GUESS IS HIGHER THAN THE NUMBER!\n");
        }
        else if(guess < randomNumber)
        {
            system("cls");
            printf("YOUR GUESS IS LOWER THAN THE NUMBER!\n");
        }
        if(j == 1)
        {
            printf("YOU LOSE, SORRY :( \n");
            printf("THE NUMBER IS %i \n", randomNumber);
            printf("DO YOU WANT TO PLAY AGAIN? PRESS 'Y' IF YES AND 'N' TO EXIT.\n");
            y = getch();
            if(y == 'y' || y == 'Y')
            {
                goto start;
            }
            break;
        }
    }
}
