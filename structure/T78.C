#include<stdio.h>
#include<string.h>
int main ()
{
struct student
{
int rollno;
char name[5];
int marks;
struct ph
{
int phone;
}p;
}s;
//struct ph p;

scanf("%d",&s.rollno);
scanf("%s",&s.name);
scanf("%d",&s.marks);
scanf("%d",&s.p.phone);

printf("%d",s.rollno);
printf("%s",s.name);
printf("%d",s.marks);
printf("%d",s.p.phone);

return 0;
}
