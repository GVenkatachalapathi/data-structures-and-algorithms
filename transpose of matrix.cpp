#include<stdio.h>
int main()
{
   int i,j,mat[3][3],trans[3][3];
   printf("Enter matrix: ");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         scanf("%d",&mat[i][j]);
      }
   }
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         trans[i][j]=mat[j][i];
      }
   }
   printf("Transpose matrix:\n");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         printf("%d\t",trans[i][j]);
      }
         printf("\n");
   }
   return 0;
}
