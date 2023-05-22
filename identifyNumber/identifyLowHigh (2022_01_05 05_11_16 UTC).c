#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    int low, high;

    printf("Please enter four values (EX: 10 20 30 40): \n");
    scanf("%i%i%i%i", &first,&second,&third,&fourth);


    if (first >= second && first >= third && first >= fourth)
        high = first;
    else if (first <= second && first <= third && first <= fourth)
        low = first;

    if (second >= first && second >= third && second >= fourth)
        high = second;
    else if (second <= first && second <= third && second <= fourth)
        low = second;

    if (third >= second && third >= first && third >= fourth)
        high = third;
    else if (third <= second && third <= first && third <= fourth)
        low = third;

    if (fourth >= second && fourth >= third && fourth >= first)
        high = fourth;
    else if (fourth <= second && fourth <= third && fourth <= first)
        low = fourth;

    printf("The highest/biggest number is: %i\n", high);
    printf("The lowest/smallest number is: %i\n", low);

    return 0;
}
