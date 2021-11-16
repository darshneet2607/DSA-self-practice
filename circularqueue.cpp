#include<iostream>
#include<conio.h>
using namespace std;
class queue
{
	int que[5];
	int f,r,val;
	public:
	queue()
	{
		f=r=-1;
	}
	void enqueue()
	{
		cout<<"enqueque  r="<<r<<" f="<<f<<"  val=";
		cin>>val;
		if (r==-1)
		{
			f=0;
		}
		if ((r==4)&&(f>0))
			r=-1;
		cout<<"f="<<f<<"  r="<<r<<endl;
		if (((r<4)&&(f==0))||((f>0)&&(r<f-1)))
		{
			que[++r]=val;
			if ((f==r)&&(f!=0))
			r=f-1;
		}
		else if ((f==0)&&(r==4))
			cout<<"sorry";
		else if (r==f-1)
			cout<<"overflow";
		cout<<"f="<<f<<"  r="<<r<<endl;
	}
	dequeue()
	{
		cout<<"dequeue\tf="<<f<<"  r="<<r<<endl;
		disp();
		if (f==r)
		{
			cout<<"\nif\tdeleting:"<<que[f++]<<endl;
			for (int i=f;i<=r;i++)
			{
				cout<<que[i]<<"\t";
				if ((r>=0)&&(i==4))
					i=0;
			}
			f=r=-1;
		}
		else
		{
			cout<<"\nelse\tdeleting:"<<que[f++]<<endl;
			disp();
		}
		if ((f>4)&&(r>=0))
			f=0;
		cout<<"f="<<f<<"  r="<<r<<endl;
	}
	disp()
	{
		cout<<"disp";
		if (r!=-1)
		{
			if (r>=f)
			{
				for (int i=f;i<=r;i++)
				{
					cout<<"disp-for a i="<<i<<endl;
					cout<<que[i]<<"\t";
				}
			}
			else if (r<f)
			{
				for (int i=f;i<=4;i++)
				{
					cout<<"disp-for i="<<i<<endl;
					cout<<que[i]<<"\t";
				}
				for (int i=0;i<=r;i++)
				{
					cout<<"disp-for2 i="<<i<<endl;
					cout<<que[i]<<"\t";
				}
			}
		}
		else
		cout<<"underflow";
	}
};
int main()
{
	queue q;
	int x,y;
	do
	{
		cout<<"\n1.add\n2.delete\t";
		cin>>x;
		switch (x)
		{
			case 1:
				q.enqueue();
				break;
			case 2:
			q.dequeue();
				break;
		}
		cout<<"\ncontinue?1.yes\t";
		cin>>y;
	}while (y==1);
	return 0;
}
