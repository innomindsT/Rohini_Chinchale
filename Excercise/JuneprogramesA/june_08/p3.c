//Factors of given number
#include<stdio.h>
void main()
{
 int num,i;
 printf("Enter the number\n");              //Entering the number from user
 scanf("%d",&num);                          //scaned the number
 for(i=1;i<=num;i++)                        //rotating the loop from 1 to entered number
  {
    if(num%i==0)                           //LOgic
    {
      printf("Factors of number=%d\n",i);
    }
  }
}
