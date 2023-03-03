// Write a program to find out the max number from given array using function

#include<stdio.h>
int Max(int a[], int n)
{
	int i;
	int max = a[0];

	for (i = 1; i < n; i++)
	{
        if (a[i] > max)
		max = a[i];
    }
    return max;
}
int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(a[0]);
	printf("Max number in array is %d", Max(a, n));
	return 0;
}
