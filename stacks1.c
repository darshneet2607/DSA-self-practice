#include<stdio.h>
#include<stdlib.h>
int size;
int top=0;
int arr[100];
void pop()
{
	if (top==0)
		printf("underflow");
	else
    top--;

}
void push()
{
		if (top==size)
			printf("overflow");
		else
		{
			int element;
			printf("enter element\n");
			scanf("%d",&element);
			arr[top]=element;
			top++;
		}
}
void print()
{
	for(int i=top-1;i>=0;i--)
		printf(" %d ",arr[i]);

}
void count()
{
	int counter=0;
	for (int i=top-1;i>0;i--)
		counter++;
	printf(" Number of elements in queue = %d\n",counter);
}
int main()
{
	printf("\n enter size of array");
	scanf("%d",&size);
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
