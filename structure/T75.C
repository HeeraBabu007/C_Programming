#include<stdio.h>
#include<string.h>
int main ()
{
struct student
{
int rollno;
char name[5];
float marks;
}
s;

scanf("%d",&s.rollno);
scanf("%s",&s.name);
scanf("%f",&s.marks);

printf("%d %f",s.rollno,s.marks);
printf("%s",s.name);
return 0;
}
