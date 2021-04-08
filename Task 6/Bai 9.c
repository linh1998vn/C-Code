#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a, b, c;
	printf ("Nhap 3 so");
	printf ("\nSo a: ");
	scanf ("%d", &a);
	printf ("\nSo b: ");
	scanf ("\n%d", &b);	
	printf ("\nSo c: ");
	scanf ("%d", &c);	

	if (a<b && b<c)
		printf ("\nThu tu 3 so theo thu tu tang dan la: %d, %d, %d", a, b, c);	
	if (a<c && c<b)
		printf ("\nThu tu 3 so theo thu tu tang dan la: %d, %d, %d", a, c, b);
	if (b<a && a<c)
		printf ("\nThu tu 3 so theo thu tu tang dan la: %d, %d, %d", b, a, c);
	if (b<c && c<a)
		printf ("\nThu tu 3 so theo thu tu tang dan la: %d, %d, %d", b, c, a);
	if (c<a && a<b)
		printf ("\nThu tu 3 so theo thu tu tang dan la: %d, %d, %d", c, a, b);
	if (c<b && b<a)
		printf ("\nThu tu 3 so theo thu tu tang dan la: %d, %d, %d", c, b, a);
	return 0;
}
