#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,f=0;
	char ch,str1[30],str2[30],x='*';
	cout<<"Enter old password";
	for (i=0;i<30;i++)
	{
		ch=getch();
		 if (ch==13)
		   break;
		else
		{
			str1[i]=ch;
			putch(x);
		}
    }
	str1[i]='\0';
	cout<<endl<<"Enter new password";
	for (i=0;i<30;i++)
	{
		ch=getch();
		 if (ch==13)
		   break;
		else
		{
			str2[i]=ch;
			putch(x);
		}
    }
	str2[i]='\0';
	for (i=0;str1[i]!='\0',str2[i]!='\0';i++)
	{
		f=0;
		if (str1[i]!=str2[i])
		{
		   f=1;
		   break;
	    }
	}
	for (;str1[i]!='\0';i++)
	   f=1;
	for (;str2[i]!='\0';i++)
	   f=1;
	if (f==0)
	cout<<"ERRORRRRR";
	else
	cout<<"Successful!";
	cout<<endl<<str1<<endl<<str2;
	return 0;
}
