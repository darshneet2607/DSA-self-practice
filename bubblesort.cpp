#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,flag=0,i=0,temp=0,a[20];
	cout<<"Enter range";
	cin>>n;
	for (int i=0;i<n;i++)
	    cin>>a[i];
	while ((flag==0)&&(i<n))
	{
		flag=1;
		for (int j=0;j<n-1;j++)
		{
			if (a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				flag=0;
			}
		}
	}
	for (int i=0;i<n;i++)
	    cout<<a[i]<<",";
	return 0;
}
