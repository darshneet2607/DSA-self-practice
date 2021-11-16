#include<stdio.h>
#include<stdlib.h>
struct LL {
              int item;
              struct LL *next;
          };
typedef struct LL node;
node *ptr, *top, *head;
void pop()
{
  if(top==NULL)
  {
    printf("Underflow");
  }
  else if (top==head)
    {
      free(top);
      top=NULL;
      head=NULL;
    }
  else
  {
    node *q;
    q=head;
    while(q->next!=top)
    {
      q=q->next;
    }
    top=q;
    q=q->next;
    top->next=NULL;
    free(q);
  }
}
void push()
{
	if (top==NULL)
  {
    top=(node *)malloc(sizeof(node));
    printf("insert element\n");
    scanf("%d",&top->item);
    top->next=NULL;
    ptr=top;
    head=top;
  }
  else
  {
    top=(node *)malloc(sizeof(node));
    scanf("%d",&top->item);
    top->next=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=top;
 }
}
void print()
{
  int counter=0;
  ptr=head;
  while(ptr!=NULL)
  {
    printf("%d ",ptr->item);
    ptr=ptr->next;
    counter++;
  }
  if(counter==0)
    printf("No elements to be printed\n");
}
void count()
{
  ptr=head;
  int counter=0;
  while(ptr!=NULL)
  {
    ptr=ptr->next;
    counter++;
  }
  printf("\n Number of elements are %d",counter);
}
int main()
{
	int choice;
	do {
		printf("\nenter 1 to push, 2 to pop, 3 to print, 4 to count, 5 to exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
		case 1: push();
			break;
		case 2: pop();
			break;
		case 3: print();
			break;
		case 4: count();
			break;
		case 5: exit(0);
		default: printf("wrong choice \n");
		}
	} while (choice!=5);
}
