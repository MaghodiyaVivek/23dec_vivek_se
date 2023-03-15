#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,k;
	
	printf("Matrix1 ");
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("\nEnter a number of [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Matrix2");
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("\nEnter a number of [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nMultiplication:");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
