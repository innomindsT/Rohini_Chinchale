//Check the number is even or odd using function
#include<stdio.h>
int even_odd(int);              //function declaration
void main()
{
  int num,r;                    //variable declaration
  printf("Enter the number\n"); //entering the number from user
  scanf("%d",&num);             //scan the number
  r=even_odd(num);             //function call
  if(r==1)                     //condition checking
  printf("Number is even\n");
  else
  printf("Number is odd\n");
}
int even_odd(int num)         //function defination
{
  if(num%2==0)               //logic
  return 1;
  else
  return 0;
}
