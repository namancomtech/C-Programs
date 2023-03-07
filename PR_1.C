// WAP to display days in a calendar format of an entered month of year 2022.
/* By:
   Author Name: Naman Sharma
   Qualification: Programmer
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>


void main()
{
int a,j,h,i=1,b=1,m;
void exit(int);
clrscr();

printf("Enter any Month of year 2022: ");
scanf("%d",&m);

switch(m)
{
  case 1: a=7;j=30;break;
  case 2: a=3;j=28;break;
  case 3: a=3;j=31;break;
  case 4: a=6;j=30;break;
  case 5: a=1;j=31;break;
  case 6: a=4;j=30;break;
  case 7: a=6;j=31;break;
  case 8: a=2;j=30;break;
  case 9: a=5;j=31;break;
  case 10: a=7;j=30;break;
  case 11: a=3;j=31;break;
  case 12: a=5;j=30;break;
  default: printf("\a\aInvalid Month");
	   sleep(2);
           exit(0);
}

printf("\n\t\t\tMonth -%d- Year 2022",m);
printf("\n\t***************************************************");
printf("\n\n\tSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT");

// program for printing the month's first date w.r.t the days(mon,tue..)...
switch(a)
{
  case 1: printf("\n\t%d",i);break;
  case 2: printf("\n\t\t%d",i);break;
  case 3: printf("\n\t\t\t%d",i);break;
  case 4: printf("\n\t\t\t\t%d",i);break;
  case 5: printf("\n\t\t\t\t\t%d",i);break;
  case 6: printf("\n\t\t\t\t\t\t%d",i);break;
  case 7: printf("\n\t\t\t\t\t\t\t%d",i);break;
}
// for printing the first row of calendar.
h=8-a;
for(i=2;i<=h;i++)
{ printf("\t%d",i);
}
printf("\n");

//for printing the next rows till the month end.
for(i;i<=j;i++)
{
 if(b==8)            //if block for jumping from one row to another after b>7.
 {  printf("\n");
    b=1;
 }

 printf("\t%d",i);
 b++;

}

 getch();

}