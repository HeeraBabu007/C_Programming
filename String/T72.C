#include<string.h>
void main()
{
char a[10][10],b[10][10],c[10][10];
int i;
printf("Enter the student name");
for(i=0;i<=2;i++)
{
gets(a[i]);
}
for(i=0;i<=2;i++)
{
gets(c[i]);
}

for(i=0;i<=2;i++)
{
strcat(a[i],c[i]);
}
for(i=0;i<=2;i++)
{
puts(a[i]);
}

printf("Enter the class");
for(i=0;i<=2;i++)
{
gets(b[i]);
}


for(i=0;i<=2;i++)
{
strcat(a[i]  ,b[i]);
}
for(i=0;i<=2;i++)
{
puts(a[i]);
}

getch();
}
