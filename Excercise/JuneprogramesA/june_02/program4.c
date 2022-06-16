#include<stdio.h>
void main()
{
 float P,R,T,SI;
 printf("Enter the value principle,rate and time\n");
 scanf("%f %f %f",&P,&R,&T);
 SI=(P*R*T)/100;
 printf("Simple interest=%f\n",SI);
}
