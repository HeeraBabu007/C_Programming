#include<stdio.h>
#include<string.h>
int main ()
{

struct student
{
int rollno;
char name[5];
float marks;
}s[10];
 int i;
for(i=0;i<=2;i++)
{
scanf("%d ",&s[i].rollno);
scanf("%s",&s[i].name);
scanf("%f",&s[i].marks);

}
for(i=0;i<=2;i++)
{
printf("%d%s%f",s[i].rollno,s[i].name,s[i].marks);
}
return 0;
}
