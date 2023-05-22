//Student record system that implements file handling and pointers
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct record
{
    int studNumber;
    char name[100];
    struct subjects
    {
        int code;
        char subName[100];
        int grade;
    }sub[3];
    int total;
    float average;
    float unit;
}record;

FILE *fp, *fp1;
char *subjectName[] = {"Math", "Science", "English",};

int main()
{
    system("cls");
    char choice;

    printf("\t MENU\n");
    printf("\n [C] Create New Data");
    printf("\n [V] View");
    printf("\n [D] Delete");
    printf("\n [E] Edit");
    printf("\n [X] Exit");
    printf("\n Enter the letter of your choice: ");
    choice = getche();
    choice = toupper(choice);

    switch(choice)
    {
        case 'C': create(); break;
        case 'V': view(); break;
        case 'D': del(); break;
        case 'E': edit(); break;
        case 'X': exit(0); break;
        default : printf("\nPlease enter only a letter from the list"); break;
    }
}

void create()
{
    system("cls");
    record *s;
    int size, i, j;
    printf("Number of students: ");
    scanf("%i", &size);

    s = (record*) calloc (size, sizeof(record));

    fp = fopen("studentRec.txt", "w");
    for(i = 0; i < size; i++)
    {
        system("cls");
        s[i].total = 0;
        s[i].average = 0;
        printf("Enter the student number: ");
        scanf("%i", &s[i]);
        fflush(stdin);
        printf("\nName of Student: ");
        scanf("%[^\n]s", s[i].name);
        for(j = 0; j < 3; j++)
        {
            printf("\nEnter grade for %s: ", subjectName[j]);
            scanf("%i", &s[i].sub[j].grade);
            s[i].total += s[i].sub[j].grade;
        }
        s[i].average = s[i].total / 3;

        if(s[i].average >= 75 && s[i].average<= 77)
            s[i].unit = 3.00;
        else if(s[i].average>= 78 && s[i].average<= 80)
            s[i].unit = 2.75;
        else if(s[i].average>= 81 && s[i].average<= 83)
            s[i].unit = 2.50;
        else if(s[i].average>= 84 && s[i].average<= 86)
            s[i].unit = 2.25;
        else if(s[i].average>= 87 && s[i].average<= 89)
            s[i].unit = 2.00;
        else if(s[i].average>= 90 && s[i].average<= 92)
            s[i].unit = 1.75;
        else if(s[i].average>= 93 && s[i].average<= 95)
            s[i].unit = 1.50;
        else if(s[i].average>= 96 && s[i].average<= 98)
            s[i].unit = 1.25;
        else if(s[i].average>= 99 && s[i].average<= 100)
            s[i].unit = 1.00;
        else if(s[i].average<= 74)
            s[i].unit = 5.00;

        fwrite(&s[i], sizeof(record),1,fp);
    }
    fclose(fp);
    main();
}

void view()
{
    system("cls");
    record s1;
    int j,i;
    float r;
    fp = fopen("studentRec.txt", "r");
    printf("#    Name\t\t\t  Math\t\t  Science\t  English\t  Total\t  Average\tRate");
    while(fread(&s1,sizeof(record),1,fp))
    {
        printf("\n%-5d%-20s", s1.studNumber,s1.name);
        for(j=0; j<3; j++)
        {
            printf("\t%4d\t",s1.sub[j].grade);
        }
        printf("\t%5d\t%7.2f\t\t%.2f", s1.total,s1.average,s1.unit);
    }
    fclose(fp);
    getch();
    main();
}

void edit()
{
    system("cls");
    record s1;
    int j, studentNum, found = 0;
    fp = fopen("studentRec.txt", "r");
    fp1 = fopen("temp.txt", "w");
    printf("Enter student number to edit: ");
    scanf("%i", &studentNum);
    while(fread(&s1,sizeof(record),1,fp))
    {
        if(s1.studNumber == studentNum)
        {
            s1.total = 0;
            s1.average = 0;
            found = 1;
            fflush(stdin);
            printf("\nEnter new name: ");
            scanf("%[^\n]s", s1.name);
            for(j = 0; j < 3; j++)
            {
                printf("\nEnter grade for %s: ", subjectName[j]);
                scanf("%i", &s1.sub[j].grade);
                s1.total += s1.sub[j].grade;
            }
            s1.average = s1.total / 3;

            if(s1.average >= 75 && s1.average<= 77)
                s1.unit = 3.00;
            else if(s1.average>= 78 && s1.average<= 80)
                s1.unit = 2.75;
            else if(s1.average>= 81 && s1.average<= 83)
                s1.unit = 2.50;
            else if(s1.average>= 84 && s1.average<= 86)
                s1.unit = 2.25;
            else if(s1.average>= 87 && s1.average<= 89)
                s1.unit = 2.00;
            else if(s1.average>= 90 && s1.average<= 92)
                s1.unit = 1.75;
            else if(s1.average>= 93 && s1.average<= 95)
                s1.unit = 1.50;
            else if(s1.average>= 96 && s1.average<= 98)
                s1.unit = 1.25;
            else if(s1.average>= 99 && s1.average<= 100)
                s1.unit = 1.00;
            else if(s1.average<= 74)
                s1.unit = 5.00;

            printf("%5d%7.2f\t\t%.2f", s1.total,s1.average,s1.unit);
        }
        fwrite(&s1,sizeof(record),1,fp1);
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        fp1 = fopen("temp.txt", "r");
        fp = fopen("studentRec.txt", "w");

        while(fread(&s1,sizeof(record),1,fp1))
        {
            fwrite(&s1,sizeof(record),1,fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    if(!found)
        printf("\nStudent Not Found");
    main();
}

void del()
{
    system("cls");
    record s1;
    int j, studentNum, found = 0;
    fp = fopen("studentRec.txt", "r");
    fp1 = fopen("temp.txt", "w");
    printf("Enter student number to delete: ");
    scanf("%i", &studentNum);
    while(fread(&s1,sizeof(record),1,fp))
    {
        if(s1.studNumber == studentNum)
        {
            found = 1;
        }
        else
        {
            fwrite(&s1,sizeof(record),1,fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        fp1 = fopen("temp.txt", "r");
        fp = fopen("studentRec.txt", "w");

        while(fread(&s1,sizeof(record),1,fp1))
        {
            fwrite(&s1,sizeof(record),1,fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    if(!found)
        printf("\nStudent Not Found");
    main();
}
