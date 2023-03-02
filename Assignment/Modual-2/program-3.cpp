#include<stdio.h>;
int main()

{
	int a, b;
	printf("Enter any number : ");
	scanf("%d",a);
	b = a%2;
	(b == a) ? printf("Your number is even") : printf("Your number is odd");
}
