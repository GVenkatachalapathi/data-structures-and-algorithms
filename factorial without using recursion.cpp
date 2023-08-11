#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("enter a number :");
	scanf("%d",&n);
	if(n<0)
	{
		printf("enter postive number\n");
	}
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial :%d",fact);
}