#include<stdio.h>
void main()
{
int BS,HR,DRA=5000,GS;
printf("Enter the value of BS=");
scanf("%d%d",&BS,&GS);
if(BS>=15000)
{
HR=BS*100/40;
}
else
{
HR=BS*100/20;
}
GS=BS+HR+DRA;
printf("The values of HR,GS=%d %d");
getch();
}

