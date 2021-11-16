#include<stdio.h>
#include<stdlib.h>
struct LL {
              int item;
              struct LL *next;
          };
typedef struct LL node;
node *front, *rear, *ptr;
void push()
{
  if(front==NULL)
  {
    front=(node *)malloc(sizeof(node));
    printf("Enter element\n");
    scanf("%d",&front->item);
    front->next=NULL;
    rear=front;
  }
  else
  {
    rear=(node *)malloc(sizeof(node));
    printf("Enter element\n");
    scanf("%d",&rear->item);
    ptr=front;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=rear;
    rear->next=NULL;
  }
}
void pop()
{
  if(front==NULL)
    printf("Underflow");
  else
  {
    ptr=front;
    front=front->next;
    free(ptr);
  }
}
void print()
{
  int counter=0;
  ptr=front;
  while(ptr!=NULL)
  {
    printf("%d ",ptr->item);
    ptr=ptr->next;
    counter++;
  }
  if (counter==0)
    printf("No element to be printed\n");
}
void count()
{
  int counter=0;
  ptr=front;
  while(ptr!=NULL)
  {
    ptr=ptr->next;
    counter++;
  }
    printf("\n Number of elements = %d",counter);
}
int main()
{
  int choice;
  do {
		printf("\nEnter 1 to push, 2 to pop, 3 to print, 4 to count, 5 to exit\n");
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
