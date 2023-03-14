#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,k;

	Printf("Enter the value of matrix a:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; i++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	
	Printf("Enter the value of matrix b:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; i++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum = 0;
			for(k=0; k<2; k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	printf("Multiplication:\n");
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
