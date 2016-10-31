#include<stdio.h>
void main()
{
char i;
scanf("%c",&i);

switch(i)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':

printf("It is vowel");
break;
default:
printf("It is not a Vowel");
}
getch();
}
