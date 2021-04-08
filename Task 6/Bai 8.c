#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{ float a, b, c, delta;
	
	printf ("ax2+bx+c=0 (a!=0), nhap gia tri cho a, b, c\n");
	printf ("Nhap a: ");
	scanf ("%f", &a);
	printf ("Nhap b: ");
	scanf ("%f", &b);
	printf ("Nhap c: ");
	scanf ("%f", &c);
	
	delta=b*b-4*a*c;
	
	if (delta==0)
		printf ("Phuong trinh co nghiem kep: x12= %f", -b/(2*a));
	else if (delta<0)
		printf ("Phuong trinh vo nghiem");
	else
		printf ("Phuong trinh co 2 nghiem phan biet: x1 = %f \tx2 = %f", (-b-sqrt(delta))/(2*a), (-b+sqrt(delta))/(2*a));
	return 0;
}
