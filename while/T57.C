#include<stdio.h>
void main()
{
int f1=0,f2=1,f3,i=1,n;
printf("Enter the no");
scanf("%d",&n);
printf("%d%d",f1,f2);
while(i<=n)
{
f3=f1+f2;
i++;
printf("%d",f3);
f1=f2;
f2=f3;
}
getch();
}