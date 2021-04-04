#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	float a,b,c;
	
	printf("Nhap vao ban kinh hinh tru:\n");
	scanf("%f",&a);
	
	printf("Nhap vao chieu cao hinh tru:\n");
	scanf("%f",&b);
	
	c=a*a*b*3,14;
	
	printf("The tich hinh tru la %.2f",c);
	return 0;
}
