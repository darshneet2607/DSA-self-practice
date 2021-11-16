#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int small=0,n,a[20],pos=0,temp=0;
	cout<<"Enter range";
	cin>>n;
	for (int i=0;i<n;i++)
		  cin>>a[i];
	  for (int i=0;i<n;i++)
	{
		small=a[i];
		pos=i;
		for (int j=i;j<n;j++)
		{
			if (a[j]<small)
			{
				small=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
    }
	for (int i=0;i<n;i++)
	    cout<<a[i]<<",";
    return 0;
}
