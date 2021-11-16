#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	char a[20][20];
	int n,i=0;
	cout<<"Enter no. of strings";
	cin>>n;
	for (i=0;i<n;i++)
		cin>>a[i];
	for (i=0;i<n;i++)
   {
	   cout<<a[i];
	   cout<<endl;
    }
	return 0;
}
