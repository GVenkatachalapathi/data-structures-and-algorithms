#include<stdio.h>
#include<conio.h>
int main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, i, j;
    printf("Enter first matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter second  matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("addition of two matrices\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        	mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("result\n");
	for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
		printf("%d\n",mat3[i][j]);
		}
    }
        return 0;    
}
