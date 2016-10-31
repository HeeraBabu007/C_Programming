#include<stdio.h>
#include<string.h>
int main()
{
union std
{
int rollno;
float marks;
char name[10];
}s={10,45.2,"ajay"};
printf("%d%f%s",s.rollno,s.marks,s.name);
return 0;
}
