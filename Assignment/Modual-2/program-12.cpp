// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include<stdio.h>
int main()
{
   int no,vivek;
   printf("Enter number:"); 
   scanf("%d",&no);
   vivek = no % 10;
   while (no>9)
   {
        no = no/10;
   }
   vivek = vivek + no;
   printf("vivek of first and last digit is:%d",vivek); 
}
