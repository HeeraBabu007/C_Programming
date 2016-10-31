#include<stdio.h>
#include<conio.h>
void main()
{
float avg;
int r,n,i,sum=0;
clrscr();
printf("enter the no. of terms");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
clrscr();
printf("enter the values:\n");
scanf("%d",&r);
sum=sum+r;
}
avg=sum/n;
printf("avg of the no. is:=%f",avg);
getch();
}