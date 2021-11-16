#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int m=0,n=0,a[20],b[20],c[20],p3=0,p2=0,p1=0;
	cout<<"Enter Range for 1st array";
	cin>>m; 
	for (int j=0;j<m;j++)
	    cin>>a[j];
	cout<<"Enter Range for 2nd array";
	cin>>n;
	for (int k=0;k<n;k++)
	    cin>>b[k];
	while ((p1<m)&&(p2<n))
	{
		if (a[p1]<b[p2])
		    c[p3++]=a[p1++];
		else if (a[p1]>b[p2])
		    c[p3++]=b[p2++];
		else
		 {
			   c[p3++]=a[p1++];
		       c[p3++]=b[p2++];
	     }
	}
	while (p1<m)
	    c[p3++]=a[p1++];
	while (p2<n)
	    c[p3++]=b[p2++];
	for (int i=0;i<m+n;i++)
	    cout<<c[i];
	return 0;
}
