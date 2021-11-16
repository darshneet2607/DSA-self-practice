#include<stdio.h>
#include<stdlib.h>
struct Student {
                  struct Student *prev;
                  int rollno;
                  char name[20];
                  struct Student *next;
                };
typedef struct Student node;
node *head, *ptr;
int counter;
void insert()
{
  if(head==NULL)
  {
    head=(node *)malloc(sizeof(node));
    printf("\nEnter Student roll number and name\n");
    scanf("%d %s",&head->rollno,head->name);
    head->prev=NULL;
    head->next=NULL;
    ptr=head;
  }
  else
  {
    printf("\n Enter 1 to enter in the beginning, 2 to enter in the middle, 3 to enter at the end\n");
    int opt;
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:
              {
                check:
                {
                  node *r;
                  r=(node *)malloc(sizeof(node));
                  printf("\n Enter roll number and name of Student\n");
                  scanf("%d %s",&r->rollno,r->name);
                  r->prev=NULL;
                  r->next=head;
                  head=r;
                  head->next->prev=head->next;
                }
              }
              break;
      case 2:
              {
                int index;
                printf("\nEnter index at which you want to insert Student's detail \n");
                scanf("%d",&index);
                if(index==1)
                  goto check;
                else
                {
                  ptr=head;
                  for(int i=0;i<index-2;i++)
                  {
                    ptr=ptr->next;
                  }
                  node *r;
                  r=(node *)malloc(sizeof(node));
                  printf("\n Enter roll number and name of student \n");
                  scanf("%d %s",&r->rollno,r->name);
                  r->prev=r;
                  r->next=ptr->next;
                  ptr->next=r;
                }
              }
              break;
      case 3:
              {
                ptr=head;
                while(ptr->next!=NULL)
                {
                  ptr=ptr->next;
                }
                node *r;
                r=(node *)malloc(sizeof(node));
                printf("\n Enter roll number and name of student \n");
                scanf("%d %s",&r->rollno,r->name);
                r->prev=ptr->next;
                ptr->next=r;
                r->next=NULL;

              }
              break;
    }
  }
}
void print()
{
  ptr=head;
  counter=0;
  while(ptr!=NULL)
  {
    counter++;
    printf("\n Student %d details are Roll Number = %d and Name = %s \n ",counter,ptr->rollno,ptr->name);
    ptr=ptr->next;
  }
}

void count()
{
  printf("\n Number of Students = %d",counter);
}

void delete()
{
  printf("\n Enter 1 to remove in the beginning, 2 to remove in the middle, 3 to remove at the end\n");
  int opt;
  scanf("%d",&opt);
  switch(opt)
  {
    case 1:
            {
              check1:
              {
                node *q;
                q=head;
                head->next->prev=NULL;
                head=head->next;
                free(q);
              }
            }
            break;
    case 2:
            {
              ptr=head;
              int index;
              printf("\n Enter index you want to remove\n");
              scanf("%d",&index);
              if (index==1)
                goto check1;
              else
              {
                node *q;
                for(int i=0;i<index-2;i++)
                {
                  ptr=ptr->next;
                }
                q=ptr->next;
                ptr->next=q->next;
                free(q);
              }
            }
            break;
    case 3:
            {
              ptr=head;
              node *q;
              while(ptr->next->next!=NULL)
              {
                  ptr=ptr->next;
              }
              q=ptr;
              ptr->next=NULL;
              free(q);
            }
            break;
  }

}

int main()
{
  int choice;
  printf("\nWelcome to Student Data Base creation\n");
  do {
        printf("\nPress 1 to insert student detail, 2 to delete student detail, 3 to print student details, 4 to count number of students, 5 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1: insert();
                  break;
          case 2: delete();
                  break;
          case 3: print();
                  break;
          case 4: count();
                  break;
          case 5: break;
          default: printf("invalid choice\n");
        }
      } while(choice!=5);
}
