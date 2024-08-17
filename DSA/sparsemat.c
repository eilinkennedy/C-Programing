#include<stdio.h>
void main()
{
  int i,j,r,c,count=0,count1=0;
  printf("enter the value of r and c:");
  scanf("%d%d",&r,&c);
  int a[20][20],b[20][20];
  printf("enter the elements of matrix\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
      if(a[i][j]==0)
       { count++;
       }
       else
       { count1++;
       }
     }
     }
     if(count>count1)
     { 
       printf("it is a sparse matrix");
       printf("row\tcolumn\tvalue\n");
       b[0][0]=r;
       b[0][1]=c;
       b[0][2]=count1;
       printf("%d\t%d\t%d\n", b[0][0],b[0][1],b[0][2]);
       int k=1;
       for(i=0;i<r;i++)
       { 
        for(j=0;j<c;j++)
        {
         if(a[i][j]!=0)
         { 
          b[k][0]=i;
          b[k][1]=j;
          b[k][2]=a[i][j];
          printf("%d\t%d\t%d\n", b[k][0],b[k][1],b[k][2]);
          k++;
         }
        }
       }
      } 
      
       else
       {
       printf("it is not sparse matrix");
       }
 }      
            
          
         
       
           
