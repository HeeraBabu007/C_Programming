#include<stdio.h>
void main()
{
int y,m,d;
clrscr();
printf("Enter the year");
scanf("%d",&y);
printf("Enter the month");
scanf("%d",&m);
switch(m)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
d=31;
printf("%d",d);
break;

case 4:
case 6:
case 9:
case 11:
d=30;
printf("%d",d);
break;

case 2:
if(y%4==0)
{
d=29;
printf("leap yr");
printf("%d",d);
}
else
{
d=28;
printf("not a leap yr");
printf("%d",d);
}
break;

default:
printf("Wrong choice");
break;
printf("%d",d);
}
getch();
}