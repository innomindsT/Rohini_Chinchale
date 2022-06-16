#include<stdio.h>
void main()
{
 int num,quotient,reminder;
 printf("Enter the number\n");
 scanf("%d",&num);
 quotient=num/10;
 reminder=num%10;
 printf("Q=%d R=%d\n",quotient,reminder);
}

