#include<stdio.h>
#include<stdlib.h>
int size,front=0, rev=0;
int arr[100];
void pop()
{
	if (front>=rev)
		printf("underflow");
	else
		front++;
}
void push()
{
	if(rev>front+size-1)
		printf("overflow");
	else
	{
		int element;
		printf("enter element\n");
		scanf("%d",&element);
		arr[rev]=element;
		rev++;
	}
}
void print()
{
	for(int i=front;i<rev;i++)
		printf(" %d ",arr[i]);

}
void count()
{
	int counter;
	for (int i=front;i<rev;i++)
		counter++;
	printf(" Number of elements in queue = %d\n",counter);
}
int main()
{

	int choice;
	printf("insert size of queue");
	scanf("%d",&size);
	do {
		printf("enter 1 to push, 2 to pop, 3 to print, 4 to count, 5 to exit");
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
