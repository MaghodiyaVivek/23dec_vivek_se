// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 

#include<stdio.h>
void main()
{
   int v,i,r,sum=0;
   printf("Enter the  number:"); 
   scanf("%d",&v);
   for(i=v; v>0; v=v/10)
   {
        r = v % 10;
        sum = sum*10 + r;
   }
   printf("\nYour reverse number is:%d",sum);
}
