/* try for printing with different format specifiers*/
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int numberOfarguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    printf("Number of Arguements: %d\n", numberOfarguments);
    printf("Arguement1 is the program name: %s\n", argument1);
    printf("Arguement2 is the command line: %s\n", argument2);

    return 0;
    /*
    int intVar = 100;
    float floatVar = 100.5928457293827;
    double doubleVar = 10.555555e+55;
    char charVar = 'C';

    bool boolvar = 0;

    printf("Integer Variable = %i,%.2f\n", intVar,floatVar);
    printf("Float Variable = %f\n", floatVar);
    printf("Double Variable = %e\n", doubleVar);
    printf("Double Variable = %g\n", doubleVar);
    printf("Character Variable = %c\n", charVar);

    printf("Bool Variable = %i\n", boolvar);
    */



}
