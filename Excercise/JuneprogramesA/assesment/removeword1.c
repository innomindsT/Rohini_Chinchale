#include <stdio.h>
#include <string.h>
void main()
{
        char str[20],word[10];
        int i,j,ls,lw,temp,chk=0;
        printf("Enter the string\n");
        scanf("%[^\n]",str);
        printf("Enter the word which you want to delete\n");
        scanf("%s",word);
        ls=strlen(str);	//finding length of string
        lw=strlen(word);	//finding length of word
        for(i=0;i<ls;i++)
        {
                temp=i;
                for(j=0;j<lw;j++)
                 {
                   if(str[i]==word[j])//Comparing string and word character by character
                           i++;
                 }
                chk=i-temp;	//Checking updated value of i and previous value
                if(chk==lw)
                 {
                     i=temp;
                    for(j=i;j<(ls-lw);j++)
                            str[j]=str[j+lw];//Removing word
                    ls=ls-lw;
                    str[j]='\0';
                 }
        }
        printf("%s",str);
}

