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
    system("COLOR 30");
    system("cls");
    printf("\n    Math Tutor Version 3.0\n");
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
    system("cls");
    int ran1, ran2, ans[100], result[100], problems, process, x;
    char again;
    int score = 0;
    printf("\n\t ADDITION\n");
    printf("\nNumber of problems: ");
    scanf("%i", &problems);

    srand(time(NULL));
    for(process = 1; process <= problems; process++)
    {
        ran1 = rand()%10;
        ran2 = rand()%10;
        result[x] = ran1 + ran2;
        printf("\n%i + %i = ", ran1,ran2);
        scanf("%i", &ans[x]);
        if (ans[x] == result[x])
            {
                printf("Correct\n");
                score++;
            }
        else
            printf("Wrong! The correct answer is %i\n", result[x]);
    }
    printf("\nYour score is %i out of %i\n", score,problems);
    printf("\nDo you want to try again? \nPress 'Y' if yes and 'N' to exit");
    again = getch();
    if (again == 'Y' || again == 'y')
        main();
    else
        exit(0);
}

int sub()
{
    system("cls");
    int ran1, ran2, ans[100], result[100], problems, process, x;
    int score = 0;
    char again;
    printf("\n\t SUBTRACTION\n");
    printf("\n Number of problems: ");
    scanf("%i", &problems);

    srand(time(NULL));
    for(process = 1; process <= problems; process++)
    {
        ran1 = rand()%10;
        ran2 = rand()%10;
        if (ran1 < ran2)
        {
            result[x] = ran2 - ran1;
            printf("\n%i - %i = ", ran2,ran1);
        }
        else
        {
            result[x] = ran1 - ran2;
            printf("\n%i - %i = ", ran1,ran2);
        }
        scanf("%i", &ans[x]);
        if (ans[x] == result[x])
            {
                printf("Correct\n");
                score++;
            }
        else
            printf("Wrong! The correct answer is %i\n", result[x]);
    }
    printf("\nDo you want to try again? \nPress 'Y' if yes and 'N' to exit");
    again = getch();
    if (again == 'Y' || again == 'y')
        main();
    else
        exit(0);
}

int mul()
{
    system("cls");
    int ran1, ran2, ans[100], result[100], problems, process, x;
    int score = 0;
    char again;
    printf("\n\t MULTIPLICATION\n");
    printf("\n Number of problems: ");
    scanf("%i", &problems);

    srand(time(NULL));
    for(process = 1; process <= problems; process++)
    {
        ran1 = rand()%10;
        ran2 = rand()%10;
        result[x] = ran1 * ran2;
        printf("\n%i * %i = ", ran1,ran2);
        scanf("%i", &ans);
        if (ans[x] == result[x])
            {
                printf("Correct\n");
                score++;
            }
        else
            printf("Wrong! The correct answer is %i\n", result[x]);
    }
    printf("\nYour score is %i out of %i\n", score,problems);
    printf("\nDo you want to try again? \nPress 'Y' if yes and 'N' to exit");
    again = getch();
    if (again == 'Y' || again == 'y')
        main();
    else
        exit(0);
}

int divide()
{
    system("cls");
    int ran1, ran2, ans[100], result[100], problems, process, x;
    int score = 0;
    char again;
    printf("\n\t DIVISION\n");
    printf("\n Number of problems: ");
    scanf("%i", &problems);

    srand(time(NULL));
    for(process = 1; process <= problems; process++)
    {
        ran1 = rand()%10;
        ran2 = rand()%10;
        if (ran1 < ran2)
        {
            result[x] = ran2 / ran1;
            printf("\n%i / %i = ", ran2,ran1);
        }
        else
        {
        result[x] = ran1 / ran2;
        printf("\n%i / %i = ", ran1,ran2);
        }
        scanf("%i", &ans);
        if (ans[x] == result[x])
            {
                printf("Correct\n");
                score++;
            }
        else
            printf("Wrong! The correct answer is %i\n", result[x]);
    }
    printf("\nYour score is %i out of %i\n", score,problems);
    printf("\nDo you want to try again? \nPress 'Y' if yes and 'N' to exit");
    again = getch();
    if (again == 'Y' || again == 'y')
        main();
    else
        exit(0);

}



