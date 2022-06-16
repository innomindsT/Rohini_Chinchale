#include<stdio.h>
void main()
{
 int s1,s2,s3,s4,s5;
 float per;
 printf("Enter the 5 subject marks\n");
 scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
 per=(s1+s2+s3+s4+s5)/5;
 printf("Overall percentage is =%f\n",per);
}
