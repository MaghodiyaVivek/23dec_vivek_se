/*
A
A B
A B C
A B C D 
A B C D E
*/

#include <stdio.h>
int main()
{
    int v, j;
    for(v=1; v<=5; v++)
    {
        for(j=1;j<=v;j++)
        {
            printf("%c ",'A' + j-1);
        }
        printf("\n");
    }
}
