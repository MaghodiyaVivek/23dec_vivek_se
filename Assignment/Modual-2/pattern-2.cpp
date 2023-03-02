/*
A
B C
D E F 
G H I J
K L M N O
*/
#include <stdio.h>
int main()
{
    int v,b;
    char ch='A';
    for(v=1; v<=5; v++)
    {
        for(b=1; b<=v; b++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
}
