#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[20],n,loc,back;
	cout<<"Enter range";
	cin>>n;
	for (int i=0;i<n;i++)
	 	cin>>a[i];
	cout<<"Enter location";
	cin>>loc;
	loc--;
	if (loc<19)
	{
		back=loc;
	while(loc<n-1)
	{
		a[loc]=a[loc+1];
		loc++;
    }
	for (int i=0;i<n-1;i++)
	 	cout<<a[i];
    }
	else
	cout<<"Number not available";	
	return 0;
}
