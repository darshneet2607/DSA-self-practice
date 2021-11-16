#include<stdio.h>
int main()
{
  int num,size=10,beg,end,mid,var=0;
  float temp;
  char choice;
  printf("\n enter number of elements of array\n");
  scanf("%d",&size);
  int arr[size];
  beg=0;
  end=size-1;
  for(int i=0;i<size;i++)
  {
    printf("\nenter element %d of array ",i+1);
    scanf("%d",&arr[i]);
  }
  //sorting array using bubble sort
  for(int k=0;k<size;k++)
  {
    for (int i=0;i<size-k-1;i++)
    { var=0;
        if (arr[i]>arr[i+1])
          {
            var = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]= var;
          }
    }
  }
  do {
    printf("\n enter the number to be searched \n");
    scanf("%d",&num);
    while(beg<=end)
    {
      temp=(beg+end)/2;
      mid=temp;
      if (temp-mid!=0)
        mid++;
      if (num==arr[mid])
      {
        printf("number is present at position %d in the sorted array",mid+1);
        break;
      }
      else if (num<arr[mid])
        end=mid-1;
      else if(num>arr[mid])
        beg=mid+1;
      if(beg>end)
        printf("\n number not present\n");
    }
    printf("\n do you want to search for another number (Y/N) \n");
    scanf("%s",&choice);
    if(choice=='Y'||choice=='y')
    {
      beg=0;
      end=size-1;
    }
  } while(choice=='Y'||choice=='y');
 }
