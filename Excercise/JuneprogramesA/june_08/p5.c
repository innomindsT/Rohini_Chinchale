#include<stdio.h>
void main()
{
 int year;
 printf("Enter the year\n");
 scanf("%d",&year);
 if((year%400)==0)
 printf("Year is leap year\n");
 else if((year%100)==0)
 printf("Year is leap year\n");
 else if((year%4)==0)
 printf("Year is leap year\n");
 else
 printf("Year is not leap year\n");
}
