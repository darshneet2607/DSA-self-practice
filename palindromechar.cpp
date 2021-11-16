#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i=0,j=0,flag=0;
	char str[20];
	cout<<"Enter array";
	cin>>str;
	for (i=0;str[i]!=0;i++);
	i--;
	flag=0;
	for (j=0;i>=0;i--,j++)
	{
		if (str[i]!=str[j])
		{
			flag=1;
			break;
		}
	}
	if (flag==0)
	cout<<"It is a palindrome";
	else
	cout<<"Not a palindrome";
	return 0;
}
