#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{  int a, b, c;
	
	printf ("Nhap 3 so nguyen\n");
	printf ("So a: ");
	scanf ("%d", &a);
	printf ("So b: ");
	scanf ("%d", &b);
	printf ("So c: ");
	scanf ("%d", &c);
	
	if (a*a==b*b+c*c)
		printf ("Day la tam giac vuong voi canh huyen la a");
	else if (b*b==a*a+c*c)
		printf ("Day la tam giac vuong voi canh huyen la b");
	else if (c*c==a*a+b*b)
		printf ("Day la tam giac vuong voi canh huyen la c");
	else
		printf ("Day ko phai tam giac vuong");
	
	return 0;
}
