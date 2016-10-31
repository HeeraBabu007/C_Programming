#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10],c[20],k;
int n,i;
clrscr();
printf("enter string 1\n");
gets(a);
printf("enter string 2\n");
gets(b);
k=0;
for(i=0;a[i]!=0;i++)
{
c[i]=a[i];
k++;
}
for(i=0;b[i]!='\0';i++)
{c[k]=b[i];
k++;
}
c[k+1]='\0';
puts(c);
getch();
}
