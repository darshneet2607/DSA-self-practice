#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[4][5],r=0,c=0,sum=0,i=0,j=0;
	cout<<"Enter number of rows and columns";
	cin>>r>>c;
	cout<<"Enter numbers";
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		cin>>a[i][j];
	}
	for (i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		cout<<a[i][j]<<"\t";
		cout<<"\n";
	}
	for (i=0;i<r;i++)
	{
		sum=0;
		for (j=0;j<c;j++)
		    sum=a[i][j]+sum;
		cout<<"Sum of row"<<i+1<<" = "<<sum<<"\n";
	
   }
   	for (j=0;j<c;j++)
	{
		sum=0;
		for (i=0;i<r;i++)
		    sum=a[j][i]+sum;
		cout<<"Sum of column"<<i+1<<" = "<<sum<<"\n";
	
   }
	return 0;
}
