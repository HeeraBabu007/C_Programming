#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3,s4,avg;
printf("enter marks:");
scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
avg=(s1+s2+s3+s4)/4;
printf("average is:%d\n",avg);
if (avg>=75)
printf("merit");
if(avg>60 && avg<75)
printf("division is first");
if(avg>40 && avg<60)
printf("division is second");
if (avg<40)
printf("fail");
getch();
}

