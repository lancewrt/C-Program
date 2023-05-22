//This program will convert numerical grade to it's corresponding letter.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    int input;
    int outOfRange;

    printf("Please enter your grade: \n");
    scanf("%i", &input);


    if (input >= 0 && input <= 100)
        grade = input / 10;
    else
        printf("[ERROR] Unsupported Value! Please enter grade from 0-100 only!\n");

    switch (grade)
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
        case 6: printf("%i is equivalent to 'D'", input);
                break;
        case 7: printf("%i is equivalent to 'C'", input);
                break;
        case 8: printf("%i is equivalent to 'B'", input);
                break;
        case 9: printf("%i is equivalent to 'A'", input);
                break;
        case 10: printf("%i is equivalent to 'A'", input);
                break;

    }

}
