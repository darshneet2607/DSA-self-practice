#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[20],n,x,loc,back;
	cout<<"Enter range";
	cin>>n;
	for (int i=0;i<n;i++)
	 	cin>>a[i];
	cout<<"Enter value and location";
	cin>>x>>loc;
	loc--;
	if (loc<19)
	{
	
	  back=n;
	while(back>loc)
	{
		a[back]=a[back-1];
		back--;
    }
	a[back]=x;
   
	for (int i=0;i<n+1;i++)
	 	cout<<a[i];
   }
    else
	cout<<"Location not availavble";	
	return 0;
		
}
