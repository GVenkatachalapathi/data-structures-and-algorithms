#include<stdio.h>
int main()
{
	int n,r,as=0,temp;
	printf("enter a number :");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		r=temp%10;
		as=as+r*r*r;
		temp=temp/10;
	}
	if(as==n)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not an armstrong number");
	}
}