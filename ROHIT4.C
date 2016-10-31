 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 void main()
 {
 int i,k=0,j;
 char a[10],b[10],c[20];
 clrscr();
 printf("enter string1");
 scanf("%s",a);
 printf("enter string2");
 scanf("%s",b);
 for(i=0;a[i]!='\0';i++)
 {
 c[i]=a[i];
 k=k+1;
 }
 for(j=0;b[j]!='\0';j++)
 {
 c[k]=b[j];
 k=k++;
 }
 c[k]='\0';
 puts(c);
 getch();
 }