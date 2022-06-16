//Reversed string 
#include<stdio.h>
void reverse_string(char *);         //declaring function
void main()
{
   char s[20];                      //declaring character array
   printf("Enter the string\n");   //Entering the string from user
   scanf("%s",s);                  //scan the string
   reverse_string(s);              //function call
   printf("resversed string=%s",s);//printing the string after reversing
}
void reverse_string(char *p)       //function defination
{
   char *q,ch;                    //declaring pointer
   q=p;                          //passing base address
   while(*q)
   q++;
   p--;
   while(p<q)
   {
      ch=*p;                    //Swapping the character
      *p=*q;
      *q=ch;
       p++;
       q--;
    }
}

