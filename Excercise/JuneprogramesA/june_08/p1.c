//Reverse the digits
#include<stdio.h>
void main()
{
 int num,i,r,sum;
 printf("Enter the number\n");
 scanf("%d",&num);
 for(i=num,sum=0;i;i=i/10)
  {
    r=i%10;
    sum=10*sum+r;
  }
printf("Reversed number is= %d\n",sum);
}
