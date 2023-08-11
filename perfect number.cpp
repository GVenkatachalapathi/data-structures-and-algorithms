#include<stdio.h>
int main()
{
	int n,i,d,sum=0;
	printf("enter a number :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		d=n%i;
		if(d==0)
		sum=sum+i;	
	}
	if(sum==n)
	{
		printf("perfect !!");
	}
	else
	printf("not a perfect !!");
}