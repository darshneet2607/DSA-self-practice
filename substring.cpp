#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	char str[100],substr[100];
	int i=0,flag=0,j=0,x=0;
	cout<<"Enter string";
	gets(str);
	cout<<"Enter substring";
	gets(substr);
	for (i=0;str[i]!='\0';i++)
	{
		flag=0;
		for (j=0;substr[j]!='\0';j++)
		{
			if (str[i+j]!=substr[j])
			{
				flag=1;
				break;
			}
		}
		if (!flag)
	   {
		x++;
		cout<<"Location= "<<i+1<<"\n";
       }
       
	}
	if (x!=0)
	cout<<"Number of "<<substr<<" = "<<x;
	else
	cout<<"Not found";
    return 0;
}
