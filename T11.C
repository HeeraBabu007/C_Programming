#include<stdio.h>
void main()
{
int a;
printf("Enter the value of a");
scanf("%d",&a);
if(a%2==0)
{
printf("The entered number is Even");
}
if(a%2==1)
{
printf("The entered number is Odd");
}
getch();
}