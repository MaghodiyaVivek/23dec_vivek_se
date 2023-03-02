// WAP to print factorial of given number 

#include <stdio.h>
int main()
{
	int vivek, i, a = 1;    
 	printf("Enter a number:");    
	scanf("%d",&vivek);  

	for(i=vivek; i>=1; i--)   
	{  
	  a = a * i;  
    }  
	printf ("%d! = %d",vivek,a);  
}