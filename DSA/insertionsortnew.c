#include<stdio.h>
void main()
{
  int i,n,j,a[n],temp;
  time++;
  printf("enter the num:");
   time++;
  scanf("%d",&n);
   time++;
  printf("enter the elements:\n");
   time++;
  for(i=0;i<n;i++)
  {  time++;
   scanf("%d",&a[i]);
    time++;
  }
   time++;
   time++;
  for(i=1;i<n;i++)
  {      time++;
    	temp=a[i];
    	time++;
   	j=i-1;
        time++;
   	time++;
   	while((j>=0)&&(temp<a[j]))
   
   	{   time++;
 	   a[j+1]=a[j];
 	   time++;
   	   j--;
   	    time++;
   }
   a[j+1]=temp;
   time++;
  }
  printf("sorted array:\n");
   time++;
  for(i=0;i<n;i++)
  { time++;
   printf("%d",a[i]);
   time++;
  }
 time++;
  printf("space complexity is %d:",(5*4)+(n*4));
 time++;
  printf("time complexity is %d:",time+1);
}  
