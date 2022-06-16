//Finding the greater number out of given three number using operator
#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the a,b and c number\n");
  scanf("%d%d%d",&a,&b,&c);
  if((a>b) && (a>c))
  {
      printf("%d is greater\n",a);

  }
 else if((b>c) && (b>a))
  {
     printf("%d is greater\n",b);
  }
 else
  {
    printf("%d is greater\n",c);
  }
}
