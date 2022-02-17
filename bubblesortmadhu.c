/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>

void main()
{
    int n,i,j,a[10],b[10],temp;
    printf("\nEnter the no:of elements:");
    scanf("%d",&n);
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     b[i]=a[i];
    }
    for(i=1;i<n-1;i++)
    {
     for(j=0;j<n-i;j++)
     {
      if(a[j]>a[j+1]);
      {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
      }
     }
    }
    printf("\nThe original elements are\n");
    for(i=0;i<n;i++)
    printf("%d\n",b[i]);
    printf("\nThe sorted elements are \n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    getch();

}
