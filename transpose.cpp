#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[20][20],t[20][20],r=0,c=0;
	cout<<"Enter number of rows and columns";
	cin>>r>>c;
	cout<<"Enter numbers";
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		cin>>a[i][j];
	}
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
	    {
	    	cout<<a[i][j];
	    	t[j][i]=a[i][j];
	    }
		cout<<"\n";
	}
	for (int j=0;j<c;j++)
	{
		for (int i=0;i<r;i++)
		  cout<<t[j][i];
	    cout<<"\n";
	}
	
	return 0;
}
