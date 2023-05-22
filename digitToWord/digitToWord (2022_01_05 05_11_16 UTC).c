#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int first;
    int second;
    int spec;
    int error;

    printf("\nEnter a number you want to translate to word from 0-99: ");
    scanf("%i", &input);

    // send error when input more than 100 and less than 0
    if (input >= 0 && input <= 99)
        error = input;
    else
        printf("Please enter numbers from 0-99 only!\n");

    // accept input from 20-99 only
    if (input >= 20 && input <= 99)
        first = input / 10;
    else
        first != input / 10;
    switch (first)
    {
        case 1:
                printf("");
                break;
        case 2:
                printf("Twenty ");
                break;
        case 3:
                printf("Thirty ");
                break;
        case 4:
                printf("Forty ");
                break;
        case 5:
                printf("Fifty ");
                break;
        case 6:
                printf("Sixty ");
                break;
        case 7:
                printf("Seventy ");
                break;
        case 8:
                printf("Eighty ");
                break;
        case 9:
                printf("Ninety ");
                break;
    }

    // accept input from 10-19 only
    if (input >= 10 && input <= 19)
        spec = input - 10;
    switch (spec)
    {
        case 0:
                printf("Ten");
                break;
        case 1:
                printf("Eleven");
                break;
        case 2:
                printf("Twelve ");
                break;
        case 3:
                printf("Thirteen ");
                break;
        case 4:
                printf("Fourteen ");
                break;
        case 5:
                printf("Fifteen ");
                break;
        case 6:
                printf("Sixteen ");
                break;
        case 7:
                printf("Seventeen ");
                break;
        case 8:
                printf("Eighteen ");
                break;
        case 9:
                printf("Nineteen ");
                break;
    }
    // accept input from 20-99 or 0-9 only
    if (input >= 20 && input <= 99 || input >= 0 && input <= 9)
        second = input % 10;
    switch (second)
    {
        case 0:
                printf("Zero");
                break;
        case 1:
                printf("One");
                break;
        case 2:
                printf("Two ");
                break;
        case 3:
                printf("Three ");
                break;
        case 4:
                printf("Four ");
                break;
        case 5:
                printf("Five ");
                break;
        case 6:
                printf("Six ");
                break;
        case 7:
                printf("Seven ");
                break;
        case 8:
                printf("Eight ");
                break;
        case 9:
                printf("Nine ");
                break;
    }

}
