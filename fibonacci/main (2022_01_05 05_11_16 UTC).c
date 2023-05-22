#include <stdio.h>
#include <stdlib.h>

int main()
{
    start:
    system("cls");
    char again;
    int ans, num;
    int num1 = 0, num2 = 1;
    int num3 = num1 + num2;
    printf("Number of terms to display: ");
    scanf("%i", &num);
    if(num == 1)
    {
        printf("%i term: 0", num);
        printf("\nDo you want to try again? \nPress 'y' if yes and 'n' to exit");
    again = getch();
    if(again == 'y' || again == 'Y')
        goto start;
    else
        exit(0);
    }
    else if(num == 2)
    {
        printf("%i terms: 0, 1", num);
        printf("\nDo you want to try again? \nPress 'y' if yes and 'n' to exit");
    again = getch();
    if(again == 'y' || again == 'Y')
        goto start;
    else
        exit(0);
    }
    else
    {
    printf("%i terms: %i, %i, ", num, num1, num2);
    for (ans = 3; ans <= num; ++ans)
    {
        printf("%i, ", num3);
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    printf("\nDo you want to try again? \nPress 'y' if yes and 'n' to exit");
    again = getch();
    if(again == 'y' || again == 'Y')
        goto start;
    else
        exit(0);
    }
    return 0;
}
