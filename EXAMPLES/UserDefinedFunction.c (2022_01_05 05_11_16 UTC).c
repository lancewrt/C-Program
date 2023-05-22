#include <stdio.h>
#include <stdlib.h>

/*User defined Functions
Syntax: type name(arg1, arg2, arg3, .....);
*/

/*Function with no argument and no return value.
void HighestNum();     //Function declaration

int main()
{
    HighestNum();      //Function call
}

void HighestNum()        //Function definition
{
    int num1, num2;
    printf("Enter two numbers: "); //num1 = 100; num2 = 9;
    scanf("%i %i",&num1,&num2);
    if(num1 > num2)
    {
        printf("The highest number is: %i",num1);
    }
    else
    {
        printf("The highest number is: %i",num2);
    }
} */

/*Function with no argument and with a return value.

int HighestNum();

int main()
{
    int result;
    result = HighestNum();
    printf("The Highest number is: %i", result);
}

int HighestNum()
{
    int num1, num2, hinum;
    printf("Input two numbers: ");
    scanf("%i %i",&num1,&num2);
    if(num1 > num2)
    {
        hinum = num1;
    }
    else
    {
        hinum = num2;
    }
} */

/*Function with argument without return value.

void HighestNum(int a, int b);

int main()
{
    int num1, num2;
    printf("Input two numbers: ");
    scanf("%i %i", &num1, &num2);
    HighestNum(num1, num2);
}

void HighestNum(int x, int y)
{
    if(x > y)
    {
        printf("The highest number is: %i", x);
    }
    else
    {
        printf("The highest number is: %i",y);
    }
} */

//Function with argument and with return value.

int HighestNum(int a, int b);

int main()
{
    int num1, num2, result;
    printf("Input two numbers: ");
    scanf("%i %i", &num1, &num2);
    result = HighestNum(num1, num2);  // num1 = 67, num2 = 55
    printf("The highest number is: %i",result);
}

int HighestNum(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}





