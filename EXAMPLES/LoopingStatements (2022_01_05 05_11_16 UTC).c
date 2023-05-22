#include <stdio.h>
#include <stdlib.h>

// 1. while loop
// 2. do while loop
// 3. for loop

/* Syntax:
            initialization;
            while(condition)
            {
                statement/s;
                increment/decrement operation;
            }
*/
/*int main()
{
    int num = 1;
    while(num <= 10)
    {
        printf("%i. Hello world!\n",num);
        num++;
    }
}*/

/*Syntax:
            initialization;
            do{
                    statement/s;
                    increment/decrement operation;
              }while(condition);
*/

/*int main()
{
    int num = 10;
    do{
        printf("%i. Hello world!\n",num);
        num++;
      }while(num <= 10);
}*/

/* Syntax:
            for(initialization; condition; increment/decrement operation);
            {
                    statement/s;
            }
*/

/*int main()
{
    int num;
    for(num = 1; num <= 10; num++)
    {
        printf("%i. Hello world!\n",num);
    }
}*/
/*
int main()
{
    int x,y,z;
    printf("Input a number: ");
    scanf("%i",&x);
    y = 1;
    while(y <= 10)
    {
        z=x*y;
        printf("%i x %i = %i\n", x,y,z);
        y++;
    }
}*/

/*int main()
{
    int num = 10;
    while(num > 0)
    {
        if(num == 5)
            break;
        printf("%i\n",num);
        num--;
    }
}*/

/*int main()
{
    int num = 10;
    while(num > 0)
    {
        num--;
        if(num == 5)
            continue;
        printf("%i\n",num);
    }
}*/

int main()
{
    int x, num1, num2, result, answer, input;
    printf("Input a number: ");
    scanf("%i",&input);

    srand(time(NULL));
    for(x = 1; x <= input; x++)
    {
        num1 = rand()%10;
        num2 = rand()%10;
        result = num1 + num2;
        printf("%i + %i = ?: ", num1, num2);
        scanf("%i",&answer);
        if(result == answer)
        {
            printf("Correct!\n");
        }
        else
            printf("Wrong! The correct answer is %i\n",result);
    }
}
