#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a;
	int b; 
	printf("Nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap so thu hai:\n");
	scanf("%d",&b);
	printf("Tong cua so do la: %d\n",a+b);
	printf("Hieu cua so do la:%d\n",a-b);
	printf("Tich cua so do la:%d\n",a*b);
	printf("Thuong cua so do la:%.1f\n",(float)a/b);
	getch();
	
	return 0;
}
