

#include<stdio.h>
void main()
{
 int n, x, left, right, mid, i, flag=0, time=0;
 time++;
 printf("enter num of elements:\n");
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
 printf("enter the num to be searched:");
 time++;
 scanf("%d",&x);
 time++;
 left=0,right=n-1;
 time++;
 time++;
 while(left<=right)
 { mid=(left+right)/2;
   time++;
   time++;
   if(x==a[mid])
   { flag=1;
     break;
   }
   else if(x>a[mid])
   { left=mid+1;
   }
   else if(x<a[mid])
   { right=mid-1;
   }
 }
  time++;
 if(flag==0)
{ printf("element not found");
  time++;
}  
 else
{ printf("element found at position %d:",mid+1);
 time++;   
}
printf("space complexity=%d\n",(8*4)+(n*4));
time++;
printf("time complexity=%d",time+1);
}
