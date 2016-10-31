#include<stdio.h>
void main()
{
float x,y,big;
printf("Enter the two numbers\n");
scanf("%f%f",&x,&y);
big=(x>y ? x:y);
printf("Larger number is &8.2f\n",big);
getch();
}