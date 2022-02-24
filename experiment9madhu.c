/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int
slength (char str[])
{
  int len;			//int len=0;
  for (len = 0; str[len] != '\0'; len++);
  return len;
}

void
scompare (char str1[], char str2[])
{
  int i, flag = 0;
  if (slength (str1) != slength (str1))
    flag = 1;
  else
    for (i = 0; i < slength (str1); i++)
      if (str1[i] != str2[i])
	{
	  flag = 1;
	  break;
	}
  if (flag == 1)
    printf ("\nStrings are not equal\n");
  else
    printf ("\nstrings are equal\n");

}

void sconcat(char str1[], char str2[], char conc[])
{
  int i, j;
  for (i = 0; j < slength (str1); i++)
    conc[i] = str1[i];
    for (j = 0; i < slength (str2); i++)
      conc[i++] = str2[j];
  conc[i] = '\0';
}

void main ()
{
  char str1[50], str2[50], conc[100];
  int len, choice;
  while (1)
    {
      printf ("\n\nMain menu");
      printf("\n1.compare strings\n2.concatenate.strings\n3.stringlength\n4.Exit\n\n");
      printf ("\nEnter your choice:");
    scanf ("%d ",&choice);
   fflush(stdin);
   switch(choice)
   {
    case'1':printf(" \nEnter the First string: ");
            scanf("%s",&str1);
            printf(" \nEnter the second string: ");
           scanf("%s",&str2);
            scompare(str1,str2);
            break;
    case'2':printf(" \nEnter the First string: ");
            scanf("%s",&str1);
            printf(" \nEnter the second string: ");
           scanf("%s",&str2);
            sconcat(str1,str2,conc);
            printf(" \nconcatenated string is % s \ n \ n ",conc);
            break;
    case'3':printf(" \nEnter the string:");
            scanf("%s",&str1);
            len=slength(str1);
            printf(" \n\nThe length of the string is % d \ n \ n ",len);
            break;
    case'4':printf(" \nExiting the program .... ! !");
                    exit(0);
    default:printf(" \nInvalid choice ... ! !");
   }
  }
 }
 


