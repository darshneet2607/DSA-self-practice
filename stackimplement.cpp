#include<iostream>
using namespace std;
#include<conio.h>
class stack
{
	int age;
	stack *next;
	public:
		void push();
		void pop();
		void disp();
}*top,*x;
void stack::push()
{
	x=new stack;
	cout<<"\nEnter age";
	cin>>x->age;
	x->next=top;
	top=x;
}
void stack::disp()
{
	if (top!=NULL)
	{
	x=top;
	while(x!=NULL)
	{
		cout<<"\nAge:"<<x->age;
		x=x->next;
	}
    }
    else 
    cout<<"UNDERFLOW!";
}
void stack::pop()
{
	x=top;
	top=top->next;
	delete x;
	cout<<"Successfully deleted";
}
int main()
{
	top=NULL;
	stack ob;
	int choice,opt=1;
	do
	{
	cout<<"MENU:\n1. Press 1 to Create \n2. Press 2 to Display \n3. Press 3 to Delete";
	cin>>choice;
	switch(choice)
	{
		case 1:
			ob.push();
			break;
		case 2:
			ob.disp();
			break;
		case 3:
			ob.pop();
			break;
		default:cout<<"Choose a correct option";
    }
    cout<<"\nDo you want to continue? Press 1";
    cin>>opt;
   }while(opt==1);
   return 0;
}
