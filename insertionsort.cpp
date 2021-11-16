#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int n,t=0,L[20],j=0;
	cout<<"Enter size";
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>L[i];
	for(int i=1;i<n;i++)
	{
	    t=L[i];
	    j=i-1;
	    while ((L[j]>t)&&(j>=0))
        {
        	L[j+1]=L[j];
        	j--;
		}	    
		L[j+1]=t;
    }
    for (int i=0;i<n;i++)
       cout<<L[i]<<"\t";
    return 0;

}
