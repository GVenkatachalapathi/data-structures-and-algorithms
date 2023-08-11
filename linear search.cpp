#include<stdio.h>
int main()
{
	int n,i,a[80],key;
	printf("enter no of elements :");
	scanf("%d",&n);
	printf("enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to search :");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("%d is present at index %d",key,i);
			break;
		}
	}
		if(a[i]!=key)
		{
			printf("%d is not there in an array ",key);
		}
	return 0;
}