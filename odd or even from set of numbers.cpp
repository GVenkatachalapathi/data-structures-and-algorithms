#include<stdio.h>
int main()
{
	int a[20],n,i;
	printf("enter no of elements :");
	scanf("%d",&n);
	printf("enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("even :%d\t",a[i]);
		}
		else
		{
			printf("odd :%d\t",a[i]);
		}
	}
	return 0;
}