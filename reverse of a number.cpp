#include<stdio.h>
int main()
{
	int num,reverse=0;
	printf("enter a number to reverse :");
	scanf("%d",&num);
	while(num!=0)
	{
		reverse=reverse*10+num%10;
		num=num/10;
	}
	printf("reversed number :%d",reverse);
	return 0;
}