#include<stdio.h>
factorial(int number)
{
	if(number<=0)
	return 1;
	else
	return(number*factorial(number-1));
}
int main()
{
	int n,fact;
	printf("enter a number:\n");
	scanf("%d",&n);
	fact=factorial(n);
	printf("factorial of number :%d",fact);
}