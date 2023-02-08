#include<stdio.h>
int main()

{
	int a,b;
	printf("Enter the  year");
	scanf("%d",&a);
	b = a%4;
	if (b==0)
	{
		printf("the year %d is leap year :",a);
	}
	else
	{
		printf("the year %d is not leap year :",a);
	}
}
