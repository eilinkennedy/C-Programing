#include<stdio.h>
void main()
{
  int i,n,j,small,a[100],temp;
  printf("enter the num:");
  scanf("%d",&n);
  printf("enter the elements:\n");
  for(i=0;i<n;i++)
  { 
   scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  { 
   small=i;
  for(j=i+1;j<n;j++)
  { 
   if(a[j]<a[small])
   { 
    small=j;
     j++;
   }
  }
  if(small!=i)
  {  temp=a[i];
     a[i]=a[small];
     a[small]=temp;
   }
  }
  printf("sorted array:\n");
  for(i=0;i<n;i++)
  { 
   printf("%d",a[i]);
  }
  printf("\n");
 }     
