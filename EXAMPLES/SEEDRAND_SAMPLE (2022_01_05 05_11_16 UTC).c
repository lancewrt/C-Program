#include<stdio.h>
#include<stdlib.h>

//void add();
//void sub();
//void mult();
//void divi();

int main()
{
    int i, j, result, ans;
    srand(time(NULL));
    i = rand()%10;
    j = rand()%10;
    result = i + j;
    printf("\n %i + %i = ", i,j);
    scanf("%i",&ans);
    if(result == ans)
    {
        printf("\n CORRECT!");
    }
    else
        printf("\nWRONG");
}
