#include<stdio.h>
#include<string.h>
void main()
{
int rollno;
char name[10];
char class[20];
char address[20];
}s[5];
int i;
for(i=1;i<=5;i++)
{
scanf("%d\t%s\t%s\t%s",&s[i].rollno,&s[i].name,&s[i].class,&s[i].address);
}
for(i=1;i<=5;i++)
{
printf("%d\t%s\t%s\t%s",rollno,name,class,address);
}
getch();
}