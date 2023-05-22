#include <stdio.h>
#include <stdlib.h>


int add();
int sub();
int mul();
int divide();
int main()
{
    int input;
    int valid;
    printf("\n    Math Tutor Version 1.0\n");
    printf("\n\t Main Menu\n");
    printf("\nPress 1. Addition\n");
    printf("Press 2. Subtraction\n");
    printf("Press 3. Multiplication\n");
    printf("Press 4. Division\n");
    printf("\nChoose the number of the exercise you want to do: ");
    scanf("%i", &input);

    if (input == 1)
    {
        valid = add();
    }
    if (input == 2)
    {
        valid = sub();
    }
    if (input == 3)
    {
        valid = mul();
    }
    if (input == 4)
    {
        valid == divide();
    }

    if (input >= 1 && input <= 4)
        input = valid;
    else
        printf("Please enter only the number from the menu!\n");

}

int add()
{
    int ran1, ran2, ans, result, problems, process;
    int score = 0;
    printf("\n\t ADDITION\n");
    printf("\nNumber of problems: ");
    scanf("%i", &problems);

    srand(time(NULL));
    for(process = 1; process <= problems; process++)
    {
        ran1 = rand()%10;
        ran2 = rand()%10;
        result = ran1 + ran2;
        printf("\n%i + %i = ", ran1,ran2);
        scanf("%i", &ans);
        if (ans == result)
            {
                printf("Correct\n");
                score++;
            }
        else
            printf("Wrong! The correct answer is %i\n", result);
    }
    printf("\nYour score is %i out of %i\n", score,problems);
}

int sub()
{
    int ran1, ran2, ans, result, problems, process;
    int score = 0;
    printf("\n\t SUBTRACTION\n");
    printf("\n Number of problems: ");
    scanf("%i", &problems);

    srand(time(NULL));
    for(process = 1; process <= problems; process++)
    {
        ran1 = rand()%10;
        ran2 = rand()%10;
        result = ran1 - ran2;
        printf("\n%i - %i = ", ran1,ran2);
        scanf("%i", &ans);
        if (ans == result)
            {
                printf("Correct\n");
                score++;
            }
        else
            printf("Wrong! The correct answer is %i\n", result);
    }
    printf("\nYour score is %i out of %i\n", score,problems);
}

int mul()
{
    int ran1, ran2, ans, result, problems, process;
    int score = 0;
    printf("\n\t MULTIPLICATION\n");
    printf("\n Number of problems: ");
    scanf("%i", &problems);

    srand(time(NULL));
    for(process = 1; process <= problems; process++)
    {
        ran1 = rand()%10;
        ran2 = rand()%10;
        result = ran1 * ran2;
        printf("\n%i * %i = ", ran1,ran2);
        scanf("%i", &ans);
        if (ans == result)
            {
                printf("Correct\n");
                score++;
            }
        else
            printf("Wrong! The correct answer is %i\n", result);
    }
    printf("\nYour score is %i out of %i\n", score,problems);
}

int divide()
{
    int ran1, ran2, ans, result, problems, process;
    int score = 0;
    printf("\n\t DIVISION\n");
    printf("\n Number of problems: ");
    scanf("%i", &problems);

    srand(time(NULL));
    for(process = 1; process <= problems; process++)
    {
        ran1 = rand()%10;
        ran2 = rand()%10;
        result = ran1 / ran2;
        printf("\n%i / %i = ", ran1,ran2);
        scanf("%i", &ans);
        if (ans == result)
            {
                printf("Correct\n");
                score++;
            }
        else
            printf("Wrong! The correct answer is %i\n", result);
    }
    printf("\nYour score is %i out of %i\n", score,problems);
}




