#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLUMNS 4
void sub1(int z[][COLUMNS]);
main()
{
    int z[ROWS][COLUMNS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    sub1 (z);
}

void sub1(int z[][4])
{
    int a, b, c;
    for(b = 0; b < COLUMNS; ++b)
    {
        c = 0;
        for (a = 0; a < ROWS; ++a)
            if(z[a][b] > c)
            c = z[a][b];
            printf("%d", c);
    }
    return;
}
