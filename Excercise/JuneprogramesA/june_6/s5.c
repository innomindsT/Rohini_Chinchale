#include<stdio.h>
void main()
{
  char s[20],ch;
  int i,j;
 printf("Enter the string\n");
 scanf("%[^\n]",s);
 printf("Before reversing string=%s\n",s);
 for(i=0;s[i];i++);
 {
     for(i=i-1,j=0;j<i;j++,i--)
      {
          ch=s[i];
          s[i]=s[j];
          s[j]=ch;
       }
 }
printf("After reversing string=%s\n",s);
}
