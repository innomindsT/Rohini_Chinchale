///Merge two array 
#include<stdio.h>
void main()
{
     int a[10],b[5],n1,n2,*p,*q,i,j;                      //Declaraing the variables
     printf("Enter the number of elements array1\n");     //Enter the number elements require in first array
     scanf("%d",&n1);
     printf("Enter the array elements\n");               //Entering the array elements
     for(i=0;i<n1;i++)                                  //Rotating the loop
     scanf("%d",&a[i]);
     printf("Enter the number of elemnts in array2\n");  //Enter the numebr of elements require in second array
     scanf("%d",&n2);
     printf("Enter the array elemets\n");               //Entering array elements
     for(j=0;j<n2;j++)
     scanf("%d",&b[j]);
     p=a;                                               //Passing the base address of array1
     q=b;                                               //Passing the base address of array2
    for(i=0,j=n1;i<n2;i++,j++)                          //Rotating the loop
    {
       *(p+j)=*(q+i);                                   //Whatever data at array2 is assigned to array1
    }
    printf("The merged array is...\n");
    for(i=0;i<j;i++)                                   //Printing the merged array
   printf("%d ",a[i]);
}
