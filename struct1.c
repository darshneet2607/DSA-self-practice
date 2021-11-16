#include<stdio.h>
struct Student {
                  int rollno, year;
                  char name[20],dept[20],course[20];
                } stu[450];

void searchyear()
{
  int year,flag=0;
  printf("\nEnter year to search for students \n");
  scanf("%d",&year);
  for(int i=0;i<3;i++)
    if(year==stu[i].year)
      {
        printf("Student details are: \n Roll number = %d\t Name= %s\t Department = %s\t Course = %s\t Year = %d \n ",stu[i].rollno,stu[i].name,stu[i].dept,stu[i].course,stu[i].year);
        flag=1;
      }
    if(flag==0)
      printf("\n No such student record exists\n");
}

void searchstudent()
{
  int roll,flag=0;
  printf("\n Enter roll number of student to get details \n");
  scanf("%d",&roll);
  for(int i=0;i<3;i++)
    if(roll==stu[i].rollno)
    {
      printf("Student details are: \n Roll number = %d\t Name= %s\t Department = %s\t Course = %s\t Year = %d \n ",stu[i].rollno,stu[i].name,stu[i].dept,stu[i].course,stu[i].year);
      flag=1;
    }
    if(flag==0)
      printf("\n No such student record exists\n");
}
int main()
{
  int choice;
  for(int i=0;i<3;i++)
  {
    printf("\n Enter roll number, name, department, course and year of joining of student\n");
    scanf("%d %s %s %s %d",&stu[i].rollno,stu[i].name,stu[i].dept,stu[i].course,&stu[i].year);
  }

  // for(int i=0;i<450;i++)
  //   printf("Student details are: \n Roll number = %d\t Name= %s\t Department = %s\t Course = %s\t Year = %d \n ",stu[i].rollno,stu[i].name,stu[i].dept,stu[i].course,stu[i].year);


  do {
    searchyear();
    printf("\n Do you want to know the number of students who joined in a particular year? 1- Yes, 2- No");
    scanf("%d",&choice);
  }while(choice==1);


  do {
    searchstudent();
    printf("Enter 1 to search for another student and 2 to exit\n");
    scanf("%d",&choice);
  }while(choice==1);
}
