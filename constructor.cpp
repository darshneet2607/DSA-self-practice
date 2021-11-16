#include<iostream>
#include<conio.h>
using namespace std;
class time
{
	int hr;
	int sec;
	int min;
	void disp();
	public:
		void add(time,time);
		time(int,int,int);
};                        
time::time(int x=0,int y=0,int z=0)
{
	hr=x;
	min=y;
	sec=z;
}
void time::add(time t1,time t2)
{
	hr=t1.hr+t2.hr;
	min=t1.min+t2.min;
	sec=t1.sec+t2.sec;
	if(sec>=60)
	{
		sec-=60;
		min+=1;
	}
	if (min>=60)
	{
		min-=60;
		hr+=1;
	}
	disp();
}
void time::disp()
{
	cout<<"The net time is \n"<<hr<<"\t"<<min<<"\t"<<sec;
}
int main()
{
	int a,b,c;
	cout<<"Enter time 1";
	cin>>a>>b>>c;
	time t1(a,b,c);
	cout<<"Enter time 2";
	cin>>a>>b>>c;
	time t2(a,b,c);
	time t3;
	t3.add(t1,t2);
	return 0;
}
