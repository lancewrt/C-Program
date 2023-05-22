#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int great;
    int good;
    int bad;
    int veryBad;
    int fail;
    int grade;
    int error;
    printf("Enter your grade: ");
    scanf("%i", &input);
    // A = 90 -100, B = 80-89, C = 70 -79, D = 60 – 69, and F = 0 -59
    /*if (input >= 0 && input <= 100)
        grade = input;
    else
        printf("Please enter 0-100 only!\n");*/


    if (input >= 80 && input <= 89)
        good = input % 10;
    switch(good)
    {
        case 0: printf("%i is equivalent to 'B'", input);
                break;
        case 1: printf("%i is equivalent to 'B'", input);
                break;
        case 2: printf("%i is equivalent to 'B'", input);
                break;
        case 3: printf("%i is equivalent to 'B'", input);
                break;
        case 4: printf("%i is equivalent to 'B'", input);
                break;
        case 5: printf("%i is equivalent to 'B'", input);
                break;
        case 6: printf("%i is equivalent to 'B'", input);
                break;
        case 7: printf("%i is equivalent to 'B'", input);
                break;
        case 8: printf("%i is equivalent to 'B'", input);
                break;
        case 9: printf("%i is equivalent to 'B'", input);
                break;
    }

    if (input >= 70 && input <= 79)
        bad = input % 10;
    switch (bad)
    {
        case 0: printf("%i is equivalent to 'C'", input);
                break;
        case 1: printf("%i is equivalent to 'C'", input);
                break;
        case 2: printf("%i is equivalent to 'C'", input);
                break;
        case 3: printf("%i is equivalent to 'C'", input);
                break;
        case 4: printf("%i is equivalent to 'C'", input);
                break;
        case 5: printf("%i is equivalent to 'C'", input);
                break;
        case 6: printf("%i is equivalent to 'C'", input);
                break;
        case 7: printf("%i is equivalent to 'C'", input);
                break;
        case 8: printf("%i is equivalent to 'C'", input);
                break;
        case 9: printf("%i is equivalent to 'C'", input);
                break;
    }

    if (input >= 60 && input <= 69)
        veryBad = input % 10;
    switch (veryBad)
    {
        case 0: printf("%i is equivalent to 'D'", input);
                break;
        case 1: printf("%i is equivalent to 'D'", input);
                break;
        case 2: printf("%i is equivalent to 'D'", input);
                break;
        case 3: printf("%i is equivalent to 'D'", input);
                break;
        case 4: printf("%i is equivalent to 'D'", input);
                break;
        case 5: printf("%i is equivalent to 'D'", input);
                break;
        case 6: printf("%i is equivalent to 'D'", input);
                break;
        case 7: printf("%i is equivalent to 'D'", input);
                break;
        case 8: printf("%i is equivalent to 'D'", input);
                break;
        case 9: printf("%i is equivalent to 'D'", input);
                break;
    }

    if (input >= 0 && input <= 59)
        fail = input % 10;
    switch (fail)
    {
        case 0: printf("%i is equivalent to 'F'", input);
                break;
        case 1: printf("%i is equivalent to 'F'", input);
                break;
        case 2: printf("%i is equivalent to 'F'", input);
                break;
        case 3: printf("%i is equivalent to 'F'", input);
                break;
        case 4: printf("%i is equivalent to 'F'", input);
                break;
        case 5: printf("%i is equivalent to 'F'", input);
                break;
        case 6: printf("%i is equivalent to 'F'", input);
                break;
        case 7: printf("%i is equivalent to 'F'", input);
                break;
        case 8: printf("%i is equivalent to 'F'", input);
                break;
        case 9: printf("%i is equivalent to 'F'", input);
                break;
    }

    if (input >= 90 && input <= 99)
        great = input % 10;

    switch (great)
    {
        case 0: printf("%i is equivalent to 'A'", input);
                break;
        case 1: printf("%i is equivalent to 'A'", input);
                break;
        case 2: printf("%i is equivalent to 'A'", input);
                break;
        case 3: printf("%i is equivalent to 'A'", input);
                break;
        case 4: printf("%i is equivalent to 'A'", input);
                break;
        case 5: printf("%i is equivalent to 'A'", input);
                break;
        case 6: printf("%i is equivalent to 'A'", input);
                break;
        case 7: printf("%i is equivalent to 'A'", input);
                break;
        case 8: printf("%i is equivalent to 'A'", input);
                break;
        case 9: printf("%i is equivalent to 'A'", input);
                break;
    }
/*
    if (input >= 90 && input <= 100)
        veryGood = input % 10;
    switch (veryGood)
    {
        case 0: printf("%i is equivalent to 'A'", input);
                break;
        case 1: printf("%i is equivalent to 'A'", input);
                break;
        case 2: printf("%i is equivalent to 'A'", input);
                break;
        case 3: printf("%i is equivalent to 'A'", input);
                break;
        case 4: printf("%i is equivalent to 'A'", input);
                break;
        case 5: printf("%i is equivalent to 'A'", input);
                break;
        case 6: printf("%i is equivalent to 'A'", input);
                break;
        case 7: printf("%i is equivalent to 'A'", input);
                break;
        case 8: printf("%i is equivalent to 'A'", input);
                break;
        case 9: printf("%i is equivalent to 'A'", input);
                break;
    }

*/
}
