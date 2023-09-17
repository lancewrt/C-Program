#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define MINES 10

void menu()
{
    system("cls");
    int choice;

    printf("******************* MINESWEEPER *******************");
    printf("\n  [1] Start");
    printf("\n  [2] Exit");
    printf("\n\nEnter your choice: ");
    scanf("%i", &choice);

    if(choice == 1)
    {
        start();
    }
    else if(choice == 2)
    {
        system("cls");
        printf("GOODBYE!!!");
        exit(0);
    }
    else
    {
        printf("\nInvalid Input!");
        getch();
        menu();
    }
}

void initialize(char gameMap[ROW][COL], char mineMap[ROW][COL])
{
    system("cls");
    int i, j;
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            gameMap[i][j] = '*';
        }
    }
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            mineMap[i][j] = '0';
        }
    }

    int n = MINES;
    while(n > 0)
    {
        int i = rand() % ROW;
        int j = rand() % COL;
        if (mineMap == '1')
        {
            continue;
        }
        mineMap[i][j] = '1';
        --n;
    }
}

void printMap(char map[ROW][COL])
{
    int i, j, col, row;

    printf(" ");
    for(i = 0; i < COL; i++)
    {
        printf(" %d", i);
    }
    printf("\n");

    for(col = 0; col < COL - 2; ++col)
    {
        printf("---");
    }
    printf("\n");

    for(row = 0; row < ROW; row++)
    {
        printf("%d", row);
        for(col = 0; col < COL; col++)
        {
            printf(" %c", map[row][col]);
        }
        printf("\n");
    }
}

void updateMap(int row,int col,char gameMap[ROW][COL], char mineMap[ROW][COL])
{
    int count = 0;

    if (row - 1 >= 0 && col - 1 >= 0 && row - 1 < ROW && col - 1 < COL && mineMap[row - 1][col - 1] == '1')
    {
        count++;
    }
    if (row - 1 >= 0 && col >= 0 && row - 1 < ROW && col < COL && mineMap[row - 1][col] == '1')
    {
        count++;
    }
    if (row - 1 >= 0 && col + 1 >= 0 && row - 1 < ROW && col + 1 < COL && mineMap[row - 1][col + 1] == '1')
    {
        count++;
    }
    if (row >= 0 && col - 1 >= 0 && row < ROW && col - 1 < COL && mineMap[row][col - 1] == '1')
    {
        count++;
    }
    if (row >= 0 && col + 1 >= 0 && row < ROW && col + 1 < COL && mineMap[row][col + 1] == '1')
    {
        count++;
    }
    if (row + 1 >= 0 && col - 1 >= 0 && row + 1 < ROW && col - 1 < COL && mineMap[row + 1][col - 1] == '1')
    {
        count++;
    }
    if (row + 1 >= 0 && col + 1 >= 0 && row + 1 < ROW && col + 1 < COL && mineMap[row + 1][col + 1] == '1')
    {
        count++;
    }
    gameMap[row][col] = '0' + count;
}

void start()
{
    char gameMap[ROW][COL];
    char mineMap[ROW][COL];
    int row, col, blankCount = 0;
    initialize(gameMap,mineMap);
    while(1)
    {
        printMap(gameMap);
        printf("Please Enter a Set of Coordinate (Ex. 5 and 4): ");
        scanf("%d&d", &row, &col);
        system("cls");
        if(row < 0 || row >= ROW || col < 0 || col >= COL)
        {
            printf("Please input valid coordinates! \n");
            continue;
        }
        if(gameMap[row][col] != '*')
        {
            printf("You already entered these coordinates! \n");
            continue;
        }
        if(mineMap[row][col] == '1')
        {
            printf("You Lost! Game Over! \n");
            printMap(mineMap);
            break;
        }

        ++blankCount;
        if(blankCount == ROW * COL - MINES)
        {
            printf("HOORAY!! You Won!!! \n");
            printMap(mineMap);
            break;
        }
        updateMap(row, col, gameMap, mineMap);
    }
}

int main()
{
    srand((unsigned)time(0));
    menu();
}
