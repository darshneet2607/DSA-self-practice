#include<iostream>
using namespace std;
#include<conio.h>
class stud
{
	char n[10];
	int marks[3];
	int total;
	void disp(int,int,int);
	void cal();
	void comp();
	public:
		void get();
}s[5];
void stud::get()
{
	cout<<"Enter name and marks";
	for (int i=0;i<5;i++)
	{
		cin>>s[i].n;
		for (int j=0;j<3;j++)
		  cin>>s[i].marks[j];
	}
	s[0].cal();
}
void stud::cal()
{
	for (int i=0;i<5;i++)
	  s[i].total=0;
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<3;j++)
		  s[i].total+=s[i].marks[j];
	}
	s[0].comp();
}
void stud::comp()
{
	int l1=0,l2=0,l3=0,x,y,z;
	for (int i=0;i<5;i++)
	{
		if (s[i].total>l1)
		{
		 	l1=s[i].total;
		 	x=i;
	    }
	}
	for (int i=0;i<5;i++)
	{
		if ((s[i].total>l2)&&(s[i].total<l1))
		{
		    l2=s[i].total;
		    y=i;
	    }
	}
	for (int i=0;i<5;i++)
	{
		if ((s[i].total>l3)&&(s[i].total<l2))
		{
			l3=s[i].total;
			z=i;
        }
	}
	disp(x,y,z);
}
void stud::disp(int x,int y,int z)
{
	cout<<"The highest marks are of \t"<<s[x].n<<"\t"<<s[x].total<<endl;
	cout<<"The second highest marks are of \t"<<s[y].n<<"\t"<<s[y].total<<endl;
	cout<<"The third highest marks are of \t"<<s[z].n<<"\t"<<s[z].total<<endl;
}
int main()
{
	s[0].get();
	return 0;
}

