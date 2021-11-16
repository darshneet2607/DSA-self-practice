#include<iostream>
using namespace std;
#include<conio.h>
class stud
{
	int age;
	char name[20];
	public:
		void get(int);
		void disp(int);
		void sort(int);
}a[10];
void stud::get(int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"Enter name";
		cin>>a[i].name;
		cout<<"Enter age";
		cin>>a[i].age;
	}
	sort(n);
}
void stud::disp(int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"\nName: "<<a[i].name;
		cout<<"\nAge: "<<a[i].age;
	}
}
void stud::sort(int n)
{
	int j=0,temp=0;
	for (int i=1;i<n;i++)
	{
		j=i-1;
		temp=a[i].age;
		while((a[j].age>temp)&&(j>=0))
		{
			a[j+1].age=a[j].age;
			j--;
		}
		a[j+1].age=temp;
	}
	disp(n);
}
int main()
{
	int n;
	cout<<"\nInsertion sorting on the basis of age";
	cout<<"\nEnter number of objects";
	cin>>n;
	a[10].get(n);
	return 0;
}
