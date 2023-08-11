#include<stdio.h>
int main()
{
	int a[19],b[19],i,n1,n2,m[100];
	printf("enter no of elements :");
	scanf("%d",&n1);
	printf("enter elements in first array :\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter no of elements :");
	scanf("%d",&n2);
	printf("enter elements in second array :\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1+n2;i++)
	{
		if(i<n1)
		{
			m[i]=a[i];
		}
		else
		m[i]=b[i-n1];
	}
	printf("after merging of 2 arrays :\n");
	for(i=0;i<n1+n2;i++)
    {
        printf("%d\n",m[i]);
    }
}