/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
   int v,j,n=5;
   for(v=1; v<=n; v++)
   {
     for(j=1; j<=v; j++)
        printf(" %d", j%2);
        printf("\n");
   }
}

