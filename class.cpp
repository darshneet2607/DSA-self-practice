#include<conio.h>
#include<iostream>
using namespace std;
class stud
{
	char n[20];
	int mark[3];
	int total;
	char grade;
	void calc();
	void gd();
	void disp();
	public:
		void get();
}s1;
int main()
{
	s1.get();
	return 0;
}
void stud::get()
{
	cout<<"Enter name";
	cin>>n;
	cout<<"Enter marks";
	for (int i=0;i<3;i++)
	  cin>>mark[i];
	s1.calc();
}
void stud::calc()
{
	total=0;
	for(int i=0;i<3;i++)
	  total+=mark[i];
	s1.gd();
}
void stud::gd()
{
	if (total>=270)
	 grade='A';
	else if ((total<270)&&(total>=180))
	 grade='B';
	else
	 grade='C';
	s1.disp();
}
void stud::disp()
{
	cout<<n<<"\t"<<total<<"\t"<<grade;
}
