// WAP to print Fibonacci series up to given numbers

#include<stdio.h>
void main()
{
    int n, v1 = 0, v2 = 1, v3 = 0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonaci Series:");
    for (int i = 1; i <= n; i++) 
    {
        if(i == 1) 
        {
            printf("%d, ",v1);
            continue;
        }
        if(i == 2) 
        {
            printf("%d, ",v2);
            continue;
        }
        v3 = v1 + v2;
        v1 = v2;
        v2 = v3;
        printf("%d, ",v3);
    }
}