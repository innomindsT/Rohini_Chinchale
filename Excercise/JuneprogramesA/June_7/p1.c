//Count the number of digits present in given number using function
#include<stdio.h>
int count_digits(int);           //function defination
void main()
{
 int num,r;                      //variable declaration
 printf("Enter the number\n");   //entering the number from user
 scanf("%d",&num);               //scan the number
r=count_digits(num);             //function call
 printf("Count is =%d\n",r);     //printing the count
}                         
int count_digits(int num)        //Function defination
{
  int i,count=0;
  for(i=num;i;i=i/10)
  {
      count++;                  //Incrementing the counter
  }
return count;
}
