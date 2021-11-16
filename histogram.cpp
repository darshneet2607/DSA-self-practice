#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[26];
	char str[30],ch='a';
	cout<<"Enter array";
	cin>>str;
	for (int i=0;i<26;i++)
	a[i]=0;
	for (int i=0;str[i]!=0;i++)
	a[str[i]-'a']++;
	for (int i=0;i<26;i++,ch++)
	{
		if (a[i]!=0)
		{
			cout<<ch<<"="<<a[i]<<"\n";
		}
	}
}
