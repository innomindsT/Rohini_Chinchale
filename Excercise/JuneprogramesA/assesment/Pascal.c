#include<stdio.h>
void main()
{
	unsigned int r,p,s,n,ncr;                           
	printf("Enter the number of rows\n");     //Enter the row
	scanf("%d",&n);                           //scan the row
	for(r=0;r<n;r++)                         //loop for rows
	{     
	for(s=1;s<n-r;s++)                      //loop for space
	{
	printf(" ");
	}
	for(p=0;p<=r;p++)                     //loop for printing the numbers
        {
	if(r==0||p==0)                       //checking condition 
	{
	ncr=1;
	printf("%d ",ncr);                  //printing the ncr
	}
	else
	{
	ncr=ncr*(r-p+1)/p;                //using formula
	printf("%d ",ncr);
	}
}
               
	printf("\n");
}
}
