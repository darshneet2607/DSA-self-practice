#include<iostream>
using namespace std;
#include<conio.h>
class stud
{
	int age;
	stud *next;
	public:
		void create();
		void disp();
		void search();
		void insert();
		void reverse();
		void erase();
}*x,*first,*ptr,ob;
void stud::create()
{
	int num;
	first=new stud;
	cout<<"Enter age";
	cin>>first->age;
	first->next=NULL;
	ptr=first;
	cout<<"Enter the number of entries";
	cin>>num;
	for (int i=1;i<num;i++)
	{
		x=new stud;
		cout<<"Enter age";
		cin>>x->age;
		x->next=NULL;
		ptr->next=x;
		ptr=x;
	}
}
void stud::disp()
{
	ptr=first;
	while(ptr!=NULL)
	{
		cout<<"\nAge:"<<ptr->age;
		ptr=ptr->next;
	}
}
void stud::search()
{
	int srch;
	cout<<"Enter the age to be searched";
	cin>>srch;
	ptr=first;
	while((ptr->age!=srch)&&(ptr!=NULL))
	{
		ptr=ptr->next;
	}
	if (ptr!=NULL)
	cout<<"Age found: "<<ptr->age;
	else 
	cout<<"Age not found";
}
void stud::insert()
{
	int p;
	char choice;
	cout<<"Do you want to enter at the first node. Enter y/n";
	cin>>choice;
	if (choice=='y')
	{
		x=new stud;
		cout<<"Enter the age you would like to insert";
		cin>>x->age;
		x->next=first;
		first=x;
	}
	else
	{
	cout<<"Enter the age after which you would like to insert the new age";
	cin>>p;
	ptr=first;
	while((ptr->age!=p)&&(ptr->next!=NULL))
	    ptr=ptr->next;
	if (ptr->next!=NULL)
	{
		x=new stud;
		cout<<"Enter the age you would like to insert";
		cin>>x->age;
		x->next=ptr->next;
		ptr->next=x;
	}
   }
}
void stud::reverse()
{
	stud *ahead,*back;
	ptr=first->next;
	ahead=ptr;
	back=first;
	back->next=NULL;
	while(ahead->next!=NULL)
	{
		ahead=ahead->next;
		ptr->next=first;
		first=ptr;
		ptr=ahead;
	}
	ptr->next=first;
	first=ahead;
	cout<<"Linked list is reversed";
}
void stud::erase()
{
	int erage;
	stud *back;
	cout<<"Enter the age you want to delete";
	cin>>erage;
	ptr=first->next;
	back=first;
	if (first->age==erage)
	{
		ptr=first;
		first=first->next;
		delete ptr;
	}
	else
	{
    	while (ptr->next!=NULL)
	 {
	    	if (ptr->age==erage)
		  {
		 	back->next=ptr->next;
		 	delete ptr;
		 	break;
		  }
		  back=ptr;
		  ptr=ptr->next;
	 }
    }
    cout<<"Item deleted!";
}
int main()
{
	int choice,opt=1;
	do
	{
	cout<<"MENU:\n1. Press 1 to Create \n2. Press 2 to Display \n3. Press 3 to Search \n4. Press 4 to Insert \n5. Press 5 to Reverse \n6. Press 6 to Delete";
	cin>>choice;
	switch(choice)
	{
		case 1:
			ob.create();
			break;
		case 2:
			ob.disp();
			break;
		case 3:
			ob.search();
			break;
		case 4:
			ob.insert();
			break;
		case 5:
			ob.reverse();
			break;
		case 6:
			ob.erase();
			break;
		default:cout<<"Choose a correct option";
    }
    cout<<"\nDo you want to continue? Press 1";
    cin>>opt;
   }while(opt==1);
   return 0;
}
