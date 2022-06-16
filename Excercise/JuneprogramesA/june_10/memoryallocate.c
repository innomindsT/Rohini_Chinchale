//How much memory allocated by given integer array
#include<stdio.h>
void main()
{
 int a[]={10,20,30,40,50,60,70};            //Integer array initilized
  printf("a=%p\n &a=%p\n",&a,&a+1);     //printing the address of that array
  printf("a=%ld\n &a=%ld\n",sizeof(a),sizeof(a+1));
}
