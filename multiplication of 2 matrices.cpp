#include<stdio.h>
int main()
{
	int i,m1[3][3],m2[3][3],m3[3][3],j,sum=0,k;
	printf("enter 1st matrix elements :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("enter 2nd matrix elements :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
				sum=sum+m1[i][k]*m2[k][j];
				m3[i][j]=sum;
		}
	}
	printf("multiplication of 2 matrices :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}