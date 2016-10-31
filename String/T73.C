#include<string.h>
void main()
{
char a[10][10],c;
int i;
printf("Enter the student name");
for(i=0;i<=5;i++)
{
gets(a[i]);
}
printf("enter alphbet name");
scanf("%c",&c);
 for(i=0;i<=5;i++)
 {
 if(a[i][0]==c)
 {
  puts(a[i]);
  }

    }
  getch();
}
