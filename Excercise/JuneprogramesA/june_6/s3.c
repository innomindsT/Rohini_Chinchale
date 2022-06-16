#include<stdio.h>
void main()
{
  int num,i,c;
  printf("Enter the number\n");
  scanf("%d",&num);
  for(i=num,c=0;i;i=i/10)
  {
    c++;
  }
  printf("Count=%d\n",c);
}

 
