#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[20], n,f=0,l=0,flag=0,m=0,x;
	cout<<"Enter Range";
	cin>>n;
	l=n-1;
	for (int i=0;i<n;i++)
	{ 
	      cin>>a[i];
	}
	cout<<"Enter number";
	cin>>x;
	while ((f<=l)&&(flag==0))
	{
		m=(f+l)/2;
		if (a[m]==x)
		{ 
		     flag=1;
	    }  
		else if (x>a[m])
		    f=m+1;
		else
		    l=m-1;
    }
    if (flag==1)
    cout<<"Location is"<<m+1;
    else
    cout<<"Number not found";
	return 0;
}
