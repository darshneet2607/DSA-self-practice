#include<iostream>
using namespace std;
#include<conio.h>
class queue
{
	int val;
	queue *next;
	public:
		void dequeue();
		void enqueue();
		void disp();
} *front,*rear,*x;
void queue::enqueue()
{
	x=new queue;
	cout<<"\nEnter age";
	cin>>x->val;
	x->next=NULL;
	if (rear!=NULL)
	{
		rear->next=x;
		rear=x;
	}
	else
	rear=x;
	if (front==NULL)
	  front=rear;
}
void queue::disp()	
{
	x=front;
	while(x!=NULL)
	{
		cout<<"\n"<<x->val;
		x=x->next;
	}
}
void queue::dequeue()
{
	queue *back;
	back=front;
	front=front->next;
	delete back;
}
int main()
{
	queue ob;
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


