#include<stdio.h>
void main()
{
int yr;
printf("Enter the value of yr=");
scanf("%d",&yr);
if(yr%4==0)
{
printf("It is a leap year");
}
else
{
printf("It is not a leap year");
}
getch();
}