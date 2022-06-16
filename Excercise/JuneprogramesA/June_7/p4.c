//count the maximum frequency of character
#include<stdio.h>
void main()
{
 char s[20];                              //string declaration
int i,j,c,count=0;                        //variable declaration
printf("Enter the string\n");             //entering the strung from user
scanf("%s",s);                           //scaning the string
for(c='a';c<='z';c++)                    //checking the string is between a to z alphabates
  {    
    count=0;                             //cout initilized
    for(i=0;s[i]!='\0';i++)              //string is checking upto notequal to '\0'
     {
       if(s[i]==c)                       //logic
       {
         count++;
       }
}

if(count>0)
{     
  printf("frequency of %c is =%d\n",c,count);
}

}
}
