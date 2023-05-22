#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while(goal > clock());
}

void subtract(int subtract);
void ex(int ex);

int main()
{
        int choice;
        char c;
        def:
        system("COLOR 30");
        system("cls");
        printf("\n\n\n\t\t\t\t MENU");
        printf("\n\t\t\t\t Press 1: Addition");
        printf("\n\t\t\t\t Press 2: Subtraction");
        printf("\n\t\t\t\t Press 3: Multiplication");
        printf("\n\t\t\t\t Press 4: Division");
        printf("\n\t\t\t\t Press 5: Exit");
        printf("\n\t\t\t\t\t Enter your choice: ");
        scanf("%i", &choice);
        switch(choice)
        {
            //case 1: addition(add); break;
            case 2: subtract(subtract); break;
            //case 3: multiplication(multiplication); break;
            //case 4: division(division); break;
            case 5: ex(ex); break;
        }

        printf("\n");
        delay(1000);
        printf("Do you want to go to menu again?");
        printf("\n\t\t\t [Y] if Menu. [N] to Exit.");
        c = getch();
        if(c == 'n' || c == 'N')
        {
            exit(0);
        }
        if(c == 'y' || c == 'Y')
        {
            goto def;
        }
        getch();
}

void subtract(int sub)
{
    char c;
    do{
        system("COLOR 30");
        system("cls");
        int x, num1, num2, result, answer, input, score=0;
        printf("Input a number: ");
        scanf("%i",&input);
        srand(time(NULL));
        for(x = 1; x <= input; x++)
        {
            num1 = rand()%10;
            num2 = rand()%10;
            while(num1 < num2)
            {
                srand(time(NULL));
                num1 = rand()%10;
                num2 = rand()%10;
            }
            result = num1 - num2;
            printf("%i - %i = ?", num1, num2);
            scanf("%i",&answer);
            if(result == answer)
            {
                printf("Correct!\n");
                score++;
            }
            else
            {
                printf("Wrong!, the correct answer is %i\n", result);
            }
        }
        printf("Your score is %i/%i\n", score, input);
        printf("\n");
        printf("Do you want to use this operation again?");
        printf("\n\t\t\t\t[Y] if Yes. [N] if No.");
        c = getch();
        if(c == 'n' || c == 'N')
        {
            break;
        }
    }while(c == 'y' || c == 'Y');
}

void ex(int ex)
{
    system("COLOR 30");
    char c;
    c = 'y';
    system("cls");
    printf("\n\t\t\t\t EXIT");
    printf("\n\t\t\t\t\t Do you want to Exit?");
    printf("\n\t\t\t\t\t [Y] if Yes. [N] if No.");
    c = getch();
    switch(c)
    {
        case 'y': case 'Y': exit(0); break;
        case 'n': case 'N': main(); break;
    }
}
