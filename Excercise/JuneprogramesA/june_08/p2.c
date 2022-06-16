#include<stdio.h>
int strcmp(char *,char *);
void main()
{
 char s1[10],s2[10];
 int i,r;
 printf("Enter the string s1 and s2\n");
 scanf("%s %s",s1,s2);
 r=strcmp(s1,s2);
 if(r==1)
 printf("String is equal\n");
 else 
 printf("String is not equal\n");
}
int strcmp(char*s1,char*s2)
{
  int i;
  for(i=0;s1[i];i++)
   {
      if(s1[i]!=s2[i])
       break;
   }
  if(s1[i]==s2[i])
  return 1;
  else if(s1[i]>s2[i])
        return 0;
}
 
