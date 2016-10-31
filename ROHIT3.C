 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 char a[10],b[20];
 clrscr();
 printf("enter string1");
 scanf("%s",&a);
 strcpy(b,a);
 strrev(b);
 if(strcmp(a,b)==0)
 {
 printf("string is palindrome") ;
 }
 else
 {
 printf("string is not palindrome") ;
 }
 getch();
 }