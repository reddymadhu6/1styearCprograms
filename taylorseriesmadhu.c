/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define pi 3.142
void main()

{
   int degree,i;
   float x,nume,denom,sum=0,term;
   printf("Enter the value of degree \n");
   scanf("%d",&degree);
   x=degree*(pi/180);
   nume=x;
   denom=1;
   i=2;
   
   do
   {
    term=nume/denom;
    nume=-nume*x*x;
    denom=denom*i*(i+1);
    sum=sum+term;
    i=i+2;
   }
   while(fabs(term)>0.000001);
   printf("sin(%d)=%f without using built in function \n",degree,sum);
   printf("sin(%d)=%f using built in function\n",degree,sin(x));
   getch();
}
