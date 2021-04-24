#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL ( (void *) 0)

int choose;

int main()
{printf("enter the name of student , id ,date of birth and score respectivately \n ");
    char name[30];
gets(name);
int id;
scanf("%d",&id);
int date[10];
gets(date);
int score;
scanf("%d",score);
printf("%s",name);
        return 0;
}
