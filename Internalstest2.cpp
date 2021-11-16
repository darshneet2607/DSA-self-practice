#include<iostream>
using namespace std;
#include<conio.h>
class stud
{
	char name[50];
	int age;
	public:
		void get(int);
		void disp(int);
		void sort(int);
}ob[10];
void stud::get(int n)
{
	for (int i=0;i<n;i++)
	{cout<<"\nEnter name:";
	cin>>ob[i].name;
	cout<<"\nEnter age";
	cin>>ob[i].age;
    }
	sort(n);
}
void stud::disp(int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"\nName:"<<ob[i].name;
		cout<<"\nAge:"<<ob[i].age;
	}
}
void stud::sort(int n)
{
	int small,pos,i=0,temp=0,j=0;
	for (i=0;i<n;i++)
	{
		small=ob[i].age;
		pos=i;
		for(int j=i;j<n;j++)
		{
			if (ob[j].age<small)
			{
				small=ob[j].age;
				pos=j;
			}
		}
			temp=ob[i].age;
			ob[i].age=ob[pos].age;
			ob[pos].age=temp;
	}
	disp(n);
}
int main()
{
	int n;
	cout<<"Enter number of elements";
	cin>>n;
	ob[10].get(n);
	return 0;
}
