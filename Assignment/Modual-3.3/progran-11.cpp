#include <stdio.h>
union unionJob
{
   char name[32];
   float salary;
   int no;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int no;
} sJob;

int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes", sizeof(sJob));
}
