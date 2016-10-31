#include<stdio.h>
#include<conio.h>
void main();
{
int a[10],num,i=0,result=o,n;
clrscr();
printf("enter the no.\n");
scanf("%d",&n);
num=n;
while(num!=0)
{
result=result*10;
num=num\10;
result=result+a[i];
i++;
}
if(result==n)
printf("the no. is polindrone");
getch();
}