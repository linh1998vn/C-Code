#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	float a,b,c,s;
	
	printf("insert top:\n");
	scanf("%f",&a);
	
	printf("insert bottom:\n");
	scanf("%f",&b);
	
	printf("insert height:\n");
	scanf("%f",&c);
	
	s=(a+b)/2*c;
	
	printf("Acreage of trapezoid is:%.1f",s);
	
	
	return 0;
}
