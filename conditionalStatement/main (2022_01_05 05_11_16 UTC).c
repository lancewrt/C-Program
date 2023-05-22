#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    int passing = 25;

    printf("Please enter your score:");
    scanf("%i", &score);

    if (score >= passing)
        printf("You're Great.");
    else
        printf("You're Dumb.");
    return 0;

}
