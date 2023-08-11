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
	printf("insertion at first :\n");
	for(i=n-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=90;
	for(i=0;i<n+1;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("insertion at end :\n");
    a[n+1]=40;
    for(i=0;i<n+2;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("insertion at particular end :\n");
    for(i=7-1;i>=3;i--)
    {
    	a[i+1]=a[i];
	}
	a[3]=11;
	for(i=0;i<n+3;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("deletion at first :\n");
    for(i=0;i<n+3;i++)
    {
    	a[i]=a[i+1];
	}
	for(i=0;i<n+2;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("deletion at particular end :\n");
    for(i=2;i<n+1;i++)
    {
    	a[i]=a[i+1];
	}
	for(i=0;i<n+1;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("deletion at end :\n");
    
    	a[n]=a[n-1];

	for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}