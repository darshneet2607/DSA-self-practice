#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	char str1[30],str2[30],str3[60];
	int i=0,j=0;
	cout<<"Enter array 1";
	cin>>str1;
	cout<<"Enter array 2";
	cin>>str2;
	for (i=0;str1[i]!='\0';i++)
	    str3[i]=str1[i];
	str3[i]=' ';
	i++;
	for (j=0;str2[j]!='\0';j++)
	    str3[i+j]=str2[j];
	str3[i+j]='\0';
	cout<<str3;
	return 0;
}
