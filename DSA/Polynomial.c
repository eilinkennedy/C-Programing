
#include<stdio.h>
struct polynomial{
int coeff;
int expo;
};
int main(){
struct polynomial x[15];
int term,i;
printf("\nenter the no of terms:");
scanf("%d",&term);
printf("enter the coefficent term and exponent in descending order:");
for(i=0;i<term;i++)
{
printf(" \n coeffecient:");
scanf("%d",&x[i].coeff);
printf("\n exponent:");
scanf("%d",&x[i].expo);}
printf("the polynomial is:");
for(i=0;i<term;i++){
printf("%dx^%d",x[i].coeff,x[i].expo);

if(i<term-1)
printf("+");
}
return 0;
}

