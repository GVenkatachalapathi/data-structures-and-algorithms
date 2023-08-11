#include<stdio.h>
int main()
{
	int n,a[19],ele,i;
	printf("enter no of elements :");
	scanf("%d",&n);
	printf("enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to identify location :");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			printf("location of element :%d",i);
		}
	}
	if(a[i]!=ele)
	{
			printf("%d is not there in an array ",ele);
		}
	return 0;
}