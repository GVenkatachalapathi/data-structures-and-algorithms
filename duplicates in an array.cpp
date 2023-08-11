#include<stdio.h>
int main()
{
	int i,n,a[100],k,j;
	printf("enter no of elements :");
	scanf("%d",&n);
	printf("enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
			    n--;
			    j--;
			}
		}
	}
	printf("array elements :");
	for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
	
}