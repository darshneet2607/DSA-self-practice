#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
	int stk[5];
	int top,val;
	public:
	stack()
	{
		top=-1;
	}
	void push()
	{
		if(top<4)
		{
			cout<<"Enter value";
			cin>>val;
			stk[++top]=val;
		}
		else
		cout<<"Overflow!!!";
	}
	void pop()
	{
		int i=0;
		if (top!=-1)
		{
			cout<<"\nItem deleted: "<<stk[top--];
			while(i<=top)
			{ cout<<"\n"<<stk[i++];}
		}
		else
		cout<<"Underflow";
	}
};
int main()
{
	stack w;
	int choice,opt=1;
	do
	{
	cout<<"Menu:"<<"\n1. Press 1 to add objects \n2. Press 2 to delete objects";
	cin>>choice;
	switch(choice)
	{
		case 1: w.push();
		        break;
		case 2: w.pop();
		        break;
		default: cout<<"Choose a valid option";
	}
	cout<<"\nDo you want to continue? Press 1";
	cin>>opt;
    }while(opt==1);
    return 0;
}

