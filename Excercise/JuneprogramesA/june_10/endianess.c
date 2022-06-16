//endianess
#include<stdio.h>
void main()
{
    int i=10;        //initilizing the variables
    char *p;        // declaring character pointer
    p=(char*)&i;   //pointing to that variable
    if(*p==10)     //checking the condition
    printf("Little Endian\n");
    else
    printf("Big Endian\n");
}
