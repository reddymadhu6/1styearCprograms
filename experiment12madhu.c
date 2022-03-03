/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int binarynum[15];
    int digit_count,decimalnum=0;
    int base=0,i=0;
    printf("Enter the number of digits in binary number:\t");
    scanf("%d",&digit_count);
    printf("Enter the binary digits one aftre another:\t");
    while(i<digit_count)
    {
     scanf("%d",&binarynum[i]);
     i++;
    }
     digit_count=digit_count-1;
     while(digit_count>=0)
     {
      decimalnum=(binarynum[digit_count]*pow(2,base))+decimalnum;
      base++;
      digit_count--;
     }
     printf("\nDecimal Equivalent of binary number:\t%d",decimalnum);
     getch();
}
