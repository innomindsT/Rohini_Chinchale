#include<stdio.h>
void main()
{
 char s[20];
 int i;
 printf("Enter the string\n");
 scanf("%[^\n]",s);
 for(i=1;s[i];i++);
 printf("string length=%d\n",i);
}
