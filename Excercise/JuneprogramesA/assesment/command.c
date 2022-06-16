#include<stdio.h>
int main(int argc,char*argv[])
{
	int a,b,result;
	char opr;
	if(argc!=4)
        {
	  return -1;
	}
	a=atoi(argv[1]);
	b=atoi(argv[3]);

 opr=argv[2][0];
 switch(opr)
 {
	 case '+':result=a+b;
		  break;
         case '-':result=a-b;
		  break;
         case '*':result=a*b;
		  break;
         case '/':result=a/b;
		  break;
  }
 if(opr=='+' ||opr=='-' ||opr=='*' ||opr=='/')
 {
	 printf("%d %c %d=%d\n",a,opr,b,result);
 }
 else
 {
	 printf("Undefined operator\n");
 }
}




