#include<stdio.h>
void main()
{
int n,i=1,table=0;
printf("Enter any number");
scanf("%d",&n);
while(i<=10)
{
table=n*i;

printf("%d*%d=%d\n",n,i,table);
i++;
}
getch();
}
