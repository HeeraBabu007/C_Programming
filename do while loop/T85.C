#include<stdio.h>
void main()
{
int n,i=1,table=0;
clrscr();
printf("Enter any number ");
scanf("%d",&n);
do
{

table=n*i;
i++;
printf("\n%d",table);
}
while(i<=10);
getch();
}
