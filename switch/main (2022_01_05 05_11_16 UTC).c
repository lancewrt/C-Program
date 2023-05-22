#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("Pick a number from 1-5.\n");
    scanf("%i", &day);


    switch (day)
    {case 1:
        printf("Today is Monday");
        break;
    case 2:
        printf("Today is Tuesday");
        break;
    case 3:
        printf("Today is Wednesday");
        break;
    case 4:
        printf("Today is Thursday");
        break;
    case 5:
        printf("Today is Friday");
        break;
    default:
        printf("HATDOG");
        break;


    }
    return 0;
}
