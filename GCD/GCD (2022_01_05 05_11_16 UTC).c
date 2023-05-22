#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second, divisor, ans;
    char again;
    start:
    system("cls");
    printf("\nPlease put two (2) numbers: ");
    scanf("%i %i", &first, &second);
    for(ans=1; ans <= first && ans <= second; ++ans)
    {
        if(first % ans == 0 && second % ans == 0)
        divisor = ans;
    }
    printf("\nThe GCD is: %i", divisor);
    printf("\nDo you want to try again? \nPress 'Y' if yes and 'N' to exit: ");
    again = getch();
    if(again=='y' || again=='Y')
        goto start;
    else
        exit(0);
    return 0;
}
