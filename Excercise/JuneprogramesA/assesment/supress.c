#include<stdio.h>
char *supress(char *,char);
void main()
{
 char s[10],ch,i,j;
 printf("Enter the string\n");
 scanf("%s",s);
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
	 }	                       //whatever data at source pointer shift to destinstion and destination pointer inc
	   p++;
     *pdest='\0'; 
}









