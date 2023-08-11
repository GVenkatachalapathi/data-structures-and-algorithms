#include<stdio.h>
int main()
{
	int n,a[10],key,low,high,middle,i,j,temp;
	printf("enter no of elements :");
	scanf("%d",&n);
	printf("enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nAscending order....\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
	printf("enter element to search :\n");    
	scanf("%d",&key);
	low=0;
	high=n-1;
	middle=(low+high)/2;
	while(low<=high)
	{
		if(a[middle]<key)

			low=middle+1;
		else if(a[middle]==key)
		{
			printf("element is at :%d",middle);
			break;
		}
		else
		    high=middle-1;
			middle=(low+high)/2;
	}                     
	if(low>high)
	{
		printf("not in array");
	}
}                      