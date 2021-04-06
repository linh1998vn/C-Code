#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{	
	float a,b,c,d;
	
	printf("Nhap vao ban kinh hinh tron(cm):\n");
	scanf("%f",&a);
	printf("Chu vi hinh tron la:%.2f cm\n",2*a*3,14);
	printf("Dien tich hinh tron la: %.2f cm2\n",a*a*3,14);
	
	printf("Nhap vao canh hinh vuong(cm):\n");
	scanf("%f",&b);
	printf("Chu vi hinh vuong la:%.2f cm\n",b*4);
	printf("Dien tich hinh vuong la:%.2f cm2\n",b*b);
	
	printf("Nhap vao canh ngan hinh chu nhat(cm):\n");
	scanf("%f",&c);
	printf("Nhap vao canh dai hinh chu nhat(cm):\n");
	scanf("%f",&d);
	printf("Chu vi hinh chu nhat la:%.2f cm\n",2*c+2*d);
	printf("Dien tich hinh chu nhat la :%.2f cm2\n",c*d);
	
	getch();
	return 0;
}
