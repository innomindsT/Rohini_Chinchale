#include<stdio.h>
void main()
{
	int a,b,t,lcm,gcd;
	printf("Enter the two numbers n1,& n2\n");
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
	t=b;
	b=a%b;
	a=t;
	}
printf("gcd=%d\n",a);
lcm=(a*b)/gcd;
printf("lcm=%d\n",lcm);
}
