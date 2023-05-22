#include <stdio.h>
#include <stdlib.h>

void red()
    {
    printf("\033[1;31m");
    }
void yellow()
    {
    printf("\033[1;33m");
    }
void cyan()
    {
    printf("\033[1;36m");
    }
void blue()
    {
    printf("\033[0;34m");
    }
void purple()
    {
    printf("\033[1;35m");
    }
void reset()
    {
    printf("\033[0m");
    }
int main()
{
    int selected;
    float input1, input2, ans;

    purple();
    printf("\n \tMenu\n");
    yellow();
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    blue();
    printf("\nWhat do you want to calculate? Choose a number from the menu:");
    scanf("%i", &selected);
    reset();

    switch (selected)
    {
        case 1: cyan();
                printf("\nYou chose Addition.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &input1);
                printf("\nEnter the second number: ");
                scanf("%f", &input2);
                ans = (input1 + input2);
                printf("The sum is %.2f", ans);
                break;

        case 2: printf("\nYou chose Subtraction.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &input1);
                printf("\nEnter the second number: ");
                scanf("%f", &input2);
                ans = (input1 - input2);
                printf("The difference is %.2f", ans);
                break;

        case 3: printf("\nYou chose Multiplication.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &input1);
                printf("\nEnter the second number: ");
                scanf("%f", &input2);
                ans = (input1 * input2);
                printf("The product is %.2f", ans);
                break;

        case 4: printf("\nYou chose Division.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &input1);
                printf("\nEnter the second number: ");
                scanf("%f", &input2);
                ans = (input1 / input2);
                printf("The quotient is %.2f", ans);
                break;
                reset();


        default:red();
                printf("Please select numbers 1, 2, 3, or 4 only!");
                break;
                reset();

    }
}
