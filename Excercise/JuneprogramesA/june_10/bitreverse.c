//Reversing the Bits
#include<stdio.h>
void main()
{
  int num,pos,i,j,m,n;                            //Declaring the variables
  printf("Enter the number\n");                  //Enter the number from user
  scanf("%d",&num);                             //Scan the number
  for(pos=31;pos>=0;pos--)                      //printing the 32 bits in binary form
  {
    printf("%d ",num>>pos&1);

  }
  for(i=0,j=31;i<j;i++,j--)                    //Looping
  {
     m=num>>i&1;                        
     n=num>>j&1;
     if(m!=n)
     {
       num=num^(1<<i);                       //Toggling the bits
       num=num^(1<<j);
     }
  }
  printf("After reversing the bits\n");  
  for(pos=31;pos>=0;pos--)                   //Printing the bits after reversing
  {
    printf("%d ",num>>pos&1);

  }
}
