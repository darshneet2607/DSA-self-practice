#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i=0;
	char a[100];
	cout<<"Enter array";
	cin>>a;
	for (i=0;a[i]!='\0';i++);
	i--;
	for (;i>=0;i--)
	  cout<<a[i];
	return 0;
}
