#include<stdio.h>
void main()
{
int m,p,c,ch,b,t,prcnt;
printf("Enter the values of m,p,c,ch and b\n");
scanf("%d%d%d%d%d",&m,&p,&c,&ch,&b);
t=m+p+c+ch+b;
printf("the value of total(t)=%d\n",t);
prcnt=t/5;
printf("the value of percentage(prcnt)=%d\n",prcnt);
if(prcnt<50)
{
printf("candidate fail");
}
if(prcnt>=50 && prcnt<60)
{
printf("the candidate get C grade");
}
if(prcnt>=60 && prcnt<70)
{
printf("candidate get B grade");
}
if(prcnt>=70 && prcnt<80)
{
printf("candidate get A grade");
}
if(prcnt>=80)
{
printf("grade is a+");
}
getch();
}