#include<stdio.h>
#include<conio.h>
int main()
{

struct student
{
int rollno;
char name[10];
}s,s1;

//s={10,"heera"};
scanf("%d%s",&s.rollno,&s.name);
s1=s;
printf("%d %s",s1.rollno,s1.name);
printf("%u", sizeof(s));
return 0;
}
