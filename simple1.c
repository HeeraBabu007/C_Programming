#include<stdio.h>
int main()
{
	int a;
	printf("Enter number a:  ");
	scanf("%d",&a);
	
	int i;
	for(i=1; i<=10; i++)
	{
		printf("\n%d",a*i);
	}
	return 0;
}
