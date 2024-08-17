#include<stdio.h>
void main()
{
  int n, i, x, count=0, time=0;
  time=time+2;
  printf("enter the num of elements:");
  time++;
  scanf("%d",&n);
  time++;
  int a[n];
  for(i=0;i<n;i++)
  { printf("enter the elements %d\n",i+1);
    time++;
    scanf("%d",&a[i]);
    time++;
    time++;
   }
   time++;
   printf("enter the search element:");
   time++;
   scanf("%d",&x);
   time++;
   for(i=0;i<n;i++)
   { time++;
     time++;
     if(a[i]==x)
     { count++;
       time++;
       printf("element found at the position %d",i+1);
       time++;
     }
   }
   time++;
   time++;
   if(count>0)
   {
     printf("item is found %d time \n", count);
     time++;
   }
   else
   {printf("item not found");
    time++;
   }
   printf("space complexity=%d \n",(5*4)+(n*4));
   time++;
   printf("time complexity=%d",time+1);
}   
          
    
