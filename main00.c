#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL ( (void *) 0)

void insert_node(struct node*element)
{
    struct node*temp;
    temp=start;
    if ((start==NULL)&&(end==NULL))
    {
        append_node(element);
    }
    else
    {
        printf("where you want to insert element \n 1) insert in beginning\n 2)insert after element\n 3)insert in end ");
        scanf("%d",&choose);
        switch(choose)
        {
        case'1': {temp->next=start;
                start=temp;
        }
    case'2':{
        }

default :
    {
        append_node(element);
    };
};
};
}

int choose;

void print_list(void)
{
    struct node*temp=start;
    while(temp!=NULL)
    {
        printf("%S    %d     %s       %d    ",temp->std_name, temp->std_id,temp->std_date_bith,temp->std_score);
        temp=temp->next;
    }
}
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
