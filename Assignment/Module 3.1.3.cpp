#include<stdio.h>
int main()

{
	float pi = 3.14,r,area;
	printf("Enter redius of circle:");
	scanf("%f",&r);
	area = pi*r*r;
	printf("area of circle is:%f",area);
	
}

#include<stdio.h>
int main()

{
	int len, wid,area;
	printf("Enter length of rectangle");
	scanf("%d",&len);
	printf("Enter width of rectangle");
	scanf("%d",&wid);
	area = len*wid;
	printf("area of rectangle:%d",area);
	
}


#include<stdio.h>
int main()

{
	int bas,hei;
	printf("Enter base of triangle:");
	scanf("%d",&bas);
	printf("Enter height of triangal:");
	scanf("%d",&hei);
	area = (bas*hei)/2;
	printf("area of triangal:%d",area);
	
}



