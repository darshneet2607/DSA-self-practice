#include<stdio.h>
#include<stdlib.h>
int top1=0,top2=0;
int arr1[100];
int arr2[100];
void pop(int top)
{
	if (top<0)
		printf("underflow");
	else
    top--;
}
void push(int* arr[])
{
		int element;
		printf("enter element\n");
		scanf("%d",&element);
		arr[top]=element;
		top++;
}
void print(int* arr[])
{
	for(int i=top-1;i>=0;i--)
		printf(" %d ",arr[i]);

}
void count(int top)
{
	int counter=0;
	for (int i=top-1;i>0;i--)
		counter++;
	printf(" Number of elements in queue = %d\n",counter);
}
int main()
{
	printf("give the size of stack");
  scanf("%d",&size)
  
}
