#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int l1=0,l2=0,l3=0,a[20],n;
	cout<<"Enter range for array";
	cin>>n;
	for (int i=0;i<n;i++)
    {
	    cin>>a[i];
    	if (a[i]>l1)
	       l1=a[i];
    }
    for (int i=0;i<n;i++)
    {
        if ((a[i]>l2)&&(a[i]<l1))
	       l2=a[i];
	}
	for (int i=0;i<n;i++)
	{
    	if ((a[i]>l3)&&(a[i]<l2))
	       l3=a[i];
    }
	cout<<"The largest number is"<<l1;
	cout<<"The second largest number is"<<l2;
	cout<<"The third largest number is"<<l3;
	return 0;
}
