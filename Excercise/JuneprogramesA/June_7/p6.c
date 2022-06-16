//To Calculate the primefactors of number
#include<stdio.h>
void main()
{
 int num,i=2,j;                    //declaring variable
 printf("Enter the number\n");   //entering number and scaning it
 scanf("%d",&num);
 while(num>1)
 {
   if(num%i==0)
   {
     printf("%d ",i);
     num=num/i;
   }
   else
   {
    i++;
   }

}
}
