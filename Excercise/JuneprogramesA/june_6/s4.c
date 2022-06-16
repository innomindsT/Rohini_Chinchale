#include<stdio.h>
void main()
{
 int num,i,sum,r;
 printf("Enter the number\n");
 scanf("%d",&num);
 for(i=num,sum=0;i;i=i/10)
{
  r=i%10;
  sum=sum+r;
}
printf("sum of digits =%d\n",sum);
}
