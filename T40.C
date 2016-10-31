#include<stdio.h>
void main()
{
float m[5],f[7],mt=0,ft=0,mavg=0,favg=0,i;
printf("Enter the hieght of male students");
for(i=0;i<=4;i++)
{
scanf("%f",&m[i]);
mt=mt+m[i];
}
mavg=mt/5;
printf("%f\n%f",mt,mavg);
printf("\nEnter the hieght of female students");
for(i=0;i<=6;i++)
{
scanf("%f",&f[i]);
ft=ft+f[i];
}
favg=ft/7;
printf("\n%f\n%f",ft,favg);

getch();
}