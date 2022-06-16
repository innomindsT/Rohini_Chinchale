//Bubblesort Method
#include<stdio.h>
void main()
{
 int a[5],i,j,t,ele;                    //declaring array and variables
 ele=sizeof(a)/sizeof(a[0]);            //calculating ele size
 printf("Enter the array elements\n");  //enter the array elements and scaned it
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);
 printf("Before bubble sort.....\n");   //Before  sorting
 for(i=0;i<ele;i++)                     //Printing the array elements
 printf("%d ",a[i]);
  for(i=0;i<ele-1;i++)
   {
    for(j=0;j<ele-1-i;j++)
     {
         if(a[j]>a[j+1])                  //logic
          {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
         }
     }
   }
printf("After bubblesort....\n");     //After soring elements printed
for(i=0;i<ele;i++)
printf("%d ",a[i]);
}
