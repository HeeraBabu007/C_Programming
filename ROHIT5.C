#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20];
int n,i,j=0;
clrscr();
printf("how many character");
scanf("%d",&n);
scanf("\n%s",a);
for(i=n-1;i>=0;i--)
{
b[j]=a[i];
j++;
}
b[j+1]='\0';
printf("%s",b);
getch();
}