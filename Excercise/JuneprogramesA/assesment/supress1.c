#include<stdio.h>
char *supress(char *,char);
void main()
{
 char s[20],ch,i,j;
 printf("Enter the string\n");
 scanf("%[^\n]",s);
 printf("Enter the character which you want to delete\n");
 scanf(" %c",&ch);
 supress(s,ch);
 printf("After supress =%s\n",s);
}
char *supress(char *p,char ch)
{
	char *pdest = p;                         //source pointer p and destination pointer pdest (destination pointer same as source)
	while(*p)
	{
	  if(*p != ch)
	  *pdest++ = *p;
             	  
	   p++;
	}
     *pdest='\0'; 
}

