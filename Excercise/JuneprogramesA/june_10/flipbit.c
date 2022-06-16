#include<stdio.h>
void main()
{
       int num,pos,num1;             //initilizing the variables
       printf("Enter the number\n");//enter the number from user
       scanf("%d",&num);            //scan the number
      for(pos=31;pos>=0;pos--)      //Rotating the loop from 0 to 31
      {
           printf("%d ",num>>pos&1);//printed the number in binary form
      }
      for(pos=31;pos>=0;pos--)     
      {
           num=num^(1<<pos);       //Toggling the bits
      }
       printf("\n");

     for(pos=31;pos>=0;pos--)
     {
       printf("%d ",num>>pos&1);    //after toggling printing the binary form
     }
}
