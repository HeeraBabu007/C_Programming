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
s={100,"hr",95.8};
printf("%d %f",s.rollno,s.marks);
printf("%s",s.name);
return 0;
}
