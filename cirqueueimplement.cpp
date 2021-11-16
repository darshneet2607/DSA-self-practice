#include<iostream>
using namespace std;
#include<conio.h>
class cirqueue
{
	int val;
	cirqueue *next;
	public:
		void dequeue();
		void enqueue();
		void disp();
} *front,*rear,*x;
void cirqueue::enqueue()
{
	x=new cirqueue;
	cout<<"\nEnter age";
	cin>>x->val;
	if (rear!=NULL)
	{
		rear->next=x;
		rear=x;
		rear->next=front;
	}
	else
	rear=x;
	if (front==NULL)
	  front=rear;
}
void cirqueue::disp()	
{
	x=front;
	if (x!=NULL)
	{
	while(x!=rear)
	{
		cout<<"\n"<<x->val;
		x=x->next;
	}
	cout<<"\n"<<rear->val;
    }
    else
	cout<<"UNDERFLOW";
}
void cirqueue::dequeue()
{
	cirqueue *back;
	back=front;
	front=front->next;
	delete back;
	rear->next=front;
}
int main()
{
	cirqueue ob;
	front=rear=NULL;
	int choice,opt=1;
	do
	{
	cout<<"MENU:\n1. Press 1 to Create \n2. Press 2 to Display \n3. Press 3 to Delete";
	cin>>choice;
	switch(choice)
	{
		case 1:
			ob.enqueue();
			break;
		case 2:
			ob.disp();
			break;
		case 3:
			ob.dequeue();
			break;
		default:cout<<"Choose a correct option";
    }
    cout<<"\nDo you want to continue? Press 1";
    cin>>opt;
   }while(opt==1);
   return 0;
}
