#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3,s4,m1,m2,m3,m4;
float a;
clrscr();
printf("enter the value of s1,s2,s3,s4");
scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
printf("enter the value of m1,m2,m3,m4");
scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
a=(s1+s2+s3+s4)/(m1+m2+m3+m4)*100;
printf("%d",&a);
if(a>=75)
{
printf("merit");
}
else if(a<75&&a>=60)
{
printf("1st div");
}
else if(a<60&&a>=40)
{
printf("2nd div");
}
else
if(a<40)
printf("fail");

getch();
}