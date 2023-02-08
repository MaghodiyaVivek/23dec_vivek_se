// find simple interest
//principlr,int,time,p,r,t,si;

#include<stdio.h>
main()

{
	float p,r,t,a;
	printf("Enter a principal :");
	scanf("%f",&p);
	printf("Enter a interest :");
	scanf("%f",&r);
	printf("Enter a time :");
	scanf("%f",&t);
	a=(p*r*t)/100;
	printf("simple  interest : %f",a);
	
}
