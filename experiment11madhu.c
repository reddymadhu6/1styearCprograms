/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a[10],*ptr,std,mean,sum=0,sumstd=0;
    int n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the number of elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&n);
    ptr=a;
    for(i=0;i<n;i++)
    {
     sum=sum=*ptr;
     ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
     sumstd=sumstd+pow((*ptr-mean),2);
     ptr++;
    }
    std=sqrt(sumstd/n);
    printf("sum=%f\t",sum);
    printf("mean=%f\t",mean);
    printf("standard deviation=%f\t",std);
    getch();
}
