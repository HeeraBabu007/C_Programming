#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,exp1,exp2;
x=10;
y=15;
exp1=x*++y;
printf("\nValues of 1st expression is %d\n",exp1);
x=10;
y=15;
exp2=x*y++;
printf("\nValue of 2nd expression is %d\n",exp2);
getch();
}
