#include<stdio.h>
int main()
{
int i,sum=0,salary;
enum month {january,febuary,march,april,may,june,july,august,september,october,november,december};
enum salary;
for(i=january;i<=december;i++)
{
scanf("%d",&salary);
sum=sum+salary;
}
printf("%d",sum);
return 0;
}
