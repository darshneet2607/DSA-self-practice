#include<stdio.h>
int main()
{
  int total[10],sum;
  struct Student {
                    int rollno;
                    char name[20];
                    //int marks[3];
                  } s[10];
  struct Student *ptr=s;
  for(int i=0;i<10;i++)
  {
    printf("insert roll no, name and 3 subject's marks for student %d\n",i+1);
    scanf("%d %s",&(*ptr).rollno,(*ptr).name);
    // sum=0;
    // for(int j=0;j<3;j++)
    // {
    //   scanf("%d",ptr->marks[j]);
    //   sum+=ptr->marks[j];
    //   ptr++;
    // }
    // total[i]= sum;
    ptr++;
  }
  for(int i=0;i<10;i++)
  {
    printf("%d %s",(*ptr).rollno,(*ptr).name);
    ptr++;
  }
  // int max=total[0];
  // for(int i=0;i<10;i++)
  // {
  //   if(max<total[i])
  //     max=total[i];
  // }
  // printf("\nStudent details entered are as follows : \n \t\t\t\t\t S.No \t\t\t\t Roll Number \t\t\t\t Name \t\t\t\t\t Marks");
  // for(int i=0;i<10;i++)
  // {
  //   printf("\n\n \t\t\t\t\t %d \t\t\t\t %d \t\t\t\t %s \t\t\t\t\t %d, %d, %d   ",i+1,ptr->rollno,ptr->name,ptr->marks[0],ptr->marks[1],ptr->marks[2]);
  //   if(total[i]==max)
  //     printf (" this student secured maximum marks ");
  // }
}
