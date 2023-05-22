/*
        THIS PROGRAM DEMONSTRATES ARRAY IMPLEMENTATION.
        THIS PROGRAM MANIPULATES THE ELEMENTS INSIDE THE ARRAY.
        IT INCLUDES FUNCTIONS TO CREATE, INSERT, VIEW, DELETE, SORT,
        SEARCH,AND COUNT THE FREQUENCY OF THE ELEMENTS IN THE ARRAY.
*/

#include <stdio.h>
#include <stdlib.h>

void create();
void insert();
void view();
void del();
void sort_a();
void sort_d();
void search();
void frequency();

int a[100], freq[100];
int menu, a_size, i, position, value, sort, temp, count, j;

int main()
{
   do
    {
        system("cls");
        system("COLOR E0");
        printf("\n \t\tMENU\n");
        printf("\n 1. CREATE");
        printf("\n 2. INSERT");
        printf("\n 3. VIEW");
        printf("\n 4. DELETE");
        printf("\n 5. SORT IN ASCENDING");
        printf("\n 6. SORT IN DESCENDING");
        printf("\n 7. SEARCH ELEMENTS");
        printf("\n 8. FREQUENCY OF ELEMENTS");
        printf("\n 9. EXIT\n");
        printf("\nENTER THE NUMBER OF YOUR CHOICE:");
        scanf("%i", &menu);

        switch(menu)
        {
            case 1: create();
                    break;
            case 2: insert();
                    break;
            case 3: view();
                    break;
            case 4: del();
                    break;
            case 5: sort_a();
                    break;
            case 6: sort_d();
                    break;
            case 7: search();
                    break;
            case 8: frequency();
                    break;
            case 9: exit(0);
                    break;
            default: printf("PLEASE ENTER ONLY NUMBERS FROM THE MENU!");
                    break;
        }
    }
    while(menu != 9);

}

void create()
{
    // creates an array with the elements the user entered.
    system("cls");
    printf("INPUT THE ARRAY SIZE: ");
    scanf("%i", &a_size);
    printf("INPUT THE ELEMENTS: ");
    for(i = 0; i < a_size; i++)
    {
        scanf("%i", &a[i]);
        freq[i]=-1; // initial frequency of elements
    }
}

void insert()
{
    // inserts the element the user entered to the array and adding 1 to the array size.
    system("cls");
    printf("ENTER THE POSITION YOU WANT TO INSERT: ");
    scanf("%i", &position);
    printf("ENTER THE VALUE OF YOU WANT TO INSERT: ");
    scanf("%i", &value);

    for(i = a_size-1; i >= position; i--)
    {
        a[i+1] = a[i];
    }
    a[position] = value;
    a_size = a_size + 1;
    printf("DONE!");
    getch();
}

void view()
{
    // displays the elements that the user entered.
    system("cls");
    printf("THE ELEMENTS YOU ENTERED ARE: ");
    for(i = 0; i < a_size; i++)
    {
        printf("%i, ",a[i]);
    }
    getch();
}

void del()
{
    /* deletes the element the user entered from the array and subtracts 1
       to the array size then displays the deleted element */

    system("cls");
    printf("ENTER THE POSITION OF ELEMENT YOU WANT TO DELETE:");
    scanf("%i", &position);
    value = a[position];
    for(i = position; i < a_size - 1; i++)
    {
        a[i] = a[i+1];
    }
    a_size = a_size - 1;

    printf("THE ELEMENT YOU DELETED IS %i", value);
    getch();

}

void sort_a()
{
    // sorts the elements in ascending order.
    system("cls");
    for(i = 0; i<=a_size; i++)
    {
        for(sort = 0; sort < a_size-1; sort++)
        {
            if(a[sort] > a[sort + 1])
            {
                temp = a[sort];
                a[sort] = a[sort+1];
                a[sort+1] = temp;
            }
        }
    }
    printf("DONE!");
    getch();
}

void sort_d()
{
    // sorts the elements in descending order.
    system("cls");
    for(i = 0; i< a_size; ++i)
    {
        for(sort = i + 1; sort < a_size; ++sort)
        {
            if(a[i] < a[sort])
            {
                temp = a[i];
                a[i] = a[sort];
                a[sort] = temp;
            }
        }
    }
    printf("DONE!");
    getch();
}

void search()
{
    /* looks for the position of the element the user entered and counts
       how many times it is entered in the array then displays the
       position and the number of times the element is entered */
    system("cls");
    printf("ENTER THE ELEMENT YOU WANT TO SEARCH: ");
    scanf("%i", &value);
    count = 0;
    for(i = 0; i < a_size; i++)
    {
        if(a[i] == value)
        {
            printf("%i IS AT THE POSITION %i \n", value, i);
            count++;
        }
    }
        if(count == 0)
        {
            printf("%i IS NOT IN THE ARRAY\n", value);
        }
        else
        {
            printf("THE NUMBER OF ELEMENT %i IN THE ARRAY IS %i\n", value, count);
        }
    getch();
}

void frequency()
{
    // counts the frequency of all the elements then displays it
    system("cls");
    for(i=0; i<a_size; i++)
    {
        count=1;
        for(j=i+1; j<a_size; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for(i = 0; i < a_size; i++)
    {
        if(freq[i] != 0)
        {
            printf("THE NUMBER OF ELEMENT %i IN THE ARRAY IS %i \n", a[i],freq[i]);
        }
    }
    getch();
}


