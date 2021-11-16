#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char a[20][20];
	int i=0,j=0,n;
	cout<<"Enter no. of strings";
	cin>>n;
	for (i=0;i<n;i++)
	  cin>>a[i];
	for (i=0;i<n;i++)
	{
		for(j=0;a[i][j]!='\0';j++);
		cout<<"Length of row"<<i+1<<"="<<j<<"\n";
	}
	return 0;
}
