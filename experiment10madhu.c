/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
struct student
{
    int number;
    char name[20];
    int marks;
    char grade;
}stud[60];
 void main()
 {
  int i,n;
  float sum=0,avg=0;
  printf("Enter the number of students");
  scanf("%d",&n);
  printf("Enter the roll number,name,marks and grade of the student");
  for(i=1;i<=n;i++)
  {
   printf("\nstudent %d details\n",i);
   scanf("%d",&stud[i].number);
   scanf("%s",&stud[i].name);
   scanf("%d",&stud[i].marks);
   fflush(stdin);
   scanf("%s",&stud[i].grade);
   sum+=stud[i].marks;
  }
  avg=sum/n;
  printf("\nAvg marks id %f",avg);
  printf("\nStudent details are:");
  printf("\nRoll-number\tName\tMarks\tGrade");
  for(i=1;i=n;i++);
  printf("\n%d\t\t%s\t%d\t%c\t",stud[i].number,stud[i].name,stud[i].marks,stud[i].grade);
  printf("\nDetails of students who scored above average marks\n");
  printf("\nRoll-number\tName\tMarks\tGrade\n");
  for(i=1;i<=n;i++)
  {
   if(stud[i].marks>=avg)
   printf("\n%d\t\t%s\t%d\t%c\t",stud[i].number,stud[i].name,stud[i].marks,stud[i].grade);
 
  }
  printf("\nDetails of students who scored below average marks\n");
  printf("\nRoll-number\tName\tMarks\tGrade");
  for(i=1;i<=n;i++)
   {
   if(stud[i].marks<avg)
   printf("\n%d\t\t%s\t%d\t%c\t",stud[i].number,stud[i].name,stud[i].marks,stud[i].grade);
 
  }
 
  
  
 }