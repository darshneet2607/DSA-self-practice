#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i=0,s,a[20][20],j=0,sum1=0,sum2=0;
    cout<<"Enter side";
	cin>>s;
	cout<<"Enter numbers";
	for (i=0;i<s;i++)
	{
		for (j=0;j<s;j++)
		cin>>a[i][j];
	}
	for (i=0;i<s;i++)
	{
		for (int j=0;j<s;j++)
		cout<<a[i][j]<<"\t";
		cout<<"\n";
	}
	for (i=0;i<s;i++)
	 sum1=sum1+a[i][i];
	cout<<"Sum of Diagonal 1= "<<sum1<<"\n";
	for (i=0,j=s-1;j>=0,i<s;i++,j--)
	  sum2=sum2+a[i][j];
	cout<<"Sum of Diagonal 2= "<<sum2;
	return 0;
	
}
