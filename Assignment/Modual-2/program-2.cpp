#include<stdio.h>
int main()

{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	a = a - b;
	b = a + b;
	a = b - a;
	printf("the value of a = %d \nthe value of b =%d",a,b);
	
	
}
