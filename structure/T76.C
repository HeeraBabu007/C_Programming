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
s1,s2,s3;
printf("enter rollno.,name,marks");
scanf("%d",&s1.rollno);
scanf("%s",&s1.name);
scanf("%f",&s1.marks);

scanf("%d",&s2.rollno);
scanf("%s",&s2.name);
scanf("%f",&s2.marks);

scanf("%d",&s3.rollno);
scanf("%s",&s3.name);
scanf("%f",&s3.marks);

printf("%d\t%s\t%f",s1.rollno,s1.name,s1.marks);
printf("\n%d\t%s\t%f",s2.rollno,s2.name,s2.marks);
printf("\n%d\t%s\t%f",s3.rollno,s3.name,s3.marks);

return 0;
}
