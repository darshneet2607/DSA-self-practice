#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[20][20],s=0,i=0,j=0;
	cout<<"Enter side";
	cin>>s;
	cout<<"Enter numbers";
	for (int i=0;i<s;i++)
	{
		for (int j=0;j<s;j++)
		cin>>a[i][j];
	}
	for (int i=0;i<s;i++)
	{
		for (int j=0;j<s;j++)
		cout<<a[i][j];
		cout<<"\n";
	}
	cout<<endl;
	for (i=0;i<s;i++)
	{
		for(j=0;j<=i;j++)
		 cout<<a[i][j];
		cout<<"\n";
	}
	cout<<endl;
	for(i=0;i<s;i++)
	{
		for(int k=0;k<i;k++)
		cout<<" ";
		for (j=i;j<s;j++)
		cout<<a[i][j];
		cout<<"\n";
	}
	cout<<endl;
	for (i=0;i<s;i++)
	{
		for (j=0;j<s-i;j++)
		cout<<a[i][j];
		cout<<"\n";
	}
	cout<<endl;
	for (i=0;i<s;i++)
	{
		for (int k=0;k<s-i-1;k++)
		cout<<" ";
		for(j=s-i-1;j<s;j++)
		cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
