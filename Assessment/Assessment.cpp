#include<stdio.h>
int main()
{
	int mat[2][2], mat2[2][2], mul[2][2];
	int i,j;
	printf("------------------- Matrix1 --------------------------");
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("\n\nEnter a number of [%d][%d] : ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n------------------------- Matrix2 ----------------------------");
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("\n\nEnter a number of [%d][%d] : ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}