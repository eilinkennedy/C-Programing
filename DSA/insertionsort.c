#include<stdio.h>
void main()
{
  int i,n,j,a[n],temp;
  printf("enter the num:");
  scanf("%d",&n);
  printf("enter the elements:\n");
  for(i=0;i<n;i++)
  { 
   scanf("%d",&a[i]);
  }
  for(i=1;i<n;i++)
  {
   j=i-1;
   while(j>=0 && temp<a[j])
   {
    a[j+1]=temp;
    j--;
   }
   a[j+1]=temp;
   i++;
  }
  printf("sorted array:\n");
  for(i=0;i<n;i++)
  { 
   printf("%d",a[i]);
  }
  printf("\n");
 }       
  
