#include<stdio.h>
int add(int x,int y)
{
int z;
z=x+y;
return z;
}

int mult(int x,int y)
{
int m;
m=x*y;
return m;
}

int sub(int x,int y)
{
int s;
s=x-y;
return s;
}

int div(int x,int y)
{
int d;
d=x/y;
return d;
}


int main()
{
int a,b,c,i,j=1;
printf("Enter the value of a and b");
scanf("%d\t%d",&a,&b);
while(j<=4)
{
printf("Enter the case");

scanf("%d",&i);

switch(i)

{
case 1:
c=add(a,b);
break;

case 2:
c=mult(a,b);
break;

case 3:
c=sub(a,b);
break;

case 4:
c=div(a,b);
break;

}

printf("%d",c);

j++;
}
return 0;
}
