// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>
int main() 
{
    int no,i,max,x;
	printf("Enter your number which have to print:");
	scanf("%d",&no);
	max=0;
	for(i=1;i<=no;i++)
	{
		printf("Enter x-%d:",i);
		scanf("%d",&x);
        
        if(max < x)
		max = x;
	}
	printf("\n max = %d",max);
}
