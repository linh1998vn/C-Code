#include <stdio.h>
#include <stdlib.h>


int dientich(float a, float b)
{
	float s;
	s=a*b;
	printf ("\n\nDien tich cua hinh chu nhat la: %.2f", s);
	return s;
}
int	chuvi(float a, float b)
{
	float c;
	c=(a+b)*2;
	printf ("\n\nChu vi cua hinh chu nhat la: %.2f", c);
	return c;
}

void main ()
{
	float a, b;
	char choice;
	
	printf("Hay Nhap chieu dai va chieu rong:");
	printf ("\nChieu dai: ");
		scanf ("%f", &a);
		printf ("\nChieu rong: ");
		scanf ("%f", &b);
		printf ("\nTinh dien tich(1) hay tinh chu vi(2) ");
			fflush(stdin);
			scanf ("%c", &choice);
			switch (choice)
			{
				case '1':
					dientich(a, b);
				break;
				case '2':
					chuvi(a, b);
				break;
			}
	return 0;
	}
