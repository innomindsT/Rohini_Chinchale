#include<stdio.h>
void main()
 {
  int a,b,t;
  printf("Enter the value of a and b\n");
  scanf("%d %d",&a,&b);
  printf("before swapping a=%d b=%d\n",a,b);
  t=a;
  a=b;
  b=t;
  printf("after swapping a=%d b=%d\n",a,b);
}

