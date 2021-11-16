#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class stud
{
	int age;
	char name[20];
	public:
		void get(int);
		void disp(int);
		void reverse(int);
}ob[20],revob[20];
void stud::get(int n)
{
	for (int i=0;i<n;i++)
	{cout<<"\nEnter name:";
	cin>>ob[i].name;
	cout<<"\nEnter age";
	cin>>ob[i].age;
    }
	reverse(n);
}
void stud::disp(int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"\nName:"<<revob[i].name;
		cout<<"\nAge:"<<revob[i].age;
	}
}
void stud::reverse(int n)
{
	for (int i=0,j=n-1;i<n,j>=0;i++,j--)
	{  
	    revob[i].age=ob[j].age;
		strcpy(revob[i].name,ob[j].name);	
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
