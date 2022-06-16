#include<stdio.h>
void main()
{
  char s[20],d[20];
  int i;
  printf("Enter the string s1\n");
  scanf("%[^\n]",s);
  printf("Before Copy string= %s %s\n",s,d);
  for(i=0;s[i];i++)
  d[i]=s[i];
  d[i]='\0';
  printf("After copy string= %s %s\n",s,d);
}
