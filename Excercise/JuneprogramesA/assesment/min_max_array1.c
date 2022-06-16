//Finding the smallest and largest number.
#include<stdio.h>                          //function Declaration
void main()
{
int a[10],i,n,L,S;
printf("Enter the array size\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d ",a[i]);
for(i=0;i<n;i++)
{  
	 L=S=a[0];
	 for(i=0;i<n;i++)
	{
	 if(a[i]>L)
	 {
           L=a[i];
         }
        else if(a[i]<S)
         {
           S=a[i];
         }
         }
}
      printf("Maximum element of array=%d\n",L);
      printf("Minimum element of array=%d\n",S);
  } 
                                                                                                                                                                                                                                                                          
