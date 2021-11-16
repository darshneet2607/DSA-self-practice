#include<iostream>
using namespace std;
#include<conio.h>
class queue
{
	int qu[5];
	int f,r,val;
	public:
	queue()
	{
		f=r=-1;
	}
	void enqueue()
	{
		if (r<4)
		{
		cout<<"Enter value";
		cin>>val;
		qu[++r]=val;
		if (r==0)
		  f=0;
        }
        else
         cout<<"Overflow!!";
	}
	void dequeue()
	{
		if (r!=-1)
		{
		cout<<"Value deleted:"<<qu[f++];
		while(f<=r)
		{
			cout<<"\n"<<qu[f++];
		}
		if (f==r)
		  f=r=-1;
	    }
	    else 
	    cout<<"Underflow";
	}
};
	int main()
	{
		queue w;
	int choice,opt=1;
	do
	{
	cout<<"Menu:"<<"\n1. Press 1 to add objects \n2. Press 2 to delete objects";
	cin>>choice;
	switch(choice)
	{
		case 1: w.enqueue();
		        break;
		case 2: w.dequeue();
		        break;
		default: cout<<"Choose a valid option";
	}
	cout<<"\nDo you want to continue? Press 1";
	cin>>opt;
    }while(opt==1);
    return 0;
	}

