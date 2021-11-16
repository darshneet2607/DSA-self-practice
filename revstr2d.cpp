#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	char a[20][20],b[20][20];
	int i=0,j=0,n,k=0;
	cout<<"Enter no. of strings";
	cin>>n;
	for (i=0;i<n;i++)
	 cin>>a[i];
	for (i=0;i<n;i++)
	{
		for (j=0;a[i][j]!='\0';j++);
		j--;
		for (k=0;j>=0;k++,j--)
		  b[i][k]=a[i][j];
		b[i][k]='\0';
	}
	for (i=0;i<n;i++)
	  cout<<b[i]<<endl;
	return 0;
}
