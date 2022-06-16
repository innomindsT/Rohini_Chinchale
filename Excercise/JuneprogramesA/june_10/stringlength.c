#include<stdio.h>
void main()
{
    char s[10];
    int i;
    printf("Enter the string\n");
    scanf("%[^\n]",s);
    for(i=0;s[i];i++);
    {
     printf("Length of string=%d\n",i);
    }
}
