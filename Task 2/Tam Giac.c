#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{ float a,b,c;

printf("Nhap vao chieu cao tam giac:\n");
scanf("%f",&a);

printf("Nhap vao canh day tam giac:\n");
scanf("%f",&b);

c=a*b/2;

printf("Dien tich tam giac la %.1f",c);

	return 0;
}
