#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("enter matrix elements :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==2)
			sum=sum+a[i][j];	
		}
	}
	printf("sum =%d",sum);
	return 0;
}