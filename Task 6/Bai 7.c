#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int num1, num2;
	printf ("Nhap 2 so\n");
	printf ("So 1: ");
	scanf ("%d", &num1);
	printf ("So 2: ");
	scanf ("%d", &num2);
	
	if (num1%num2==0)
		printf ("So 2 la uoc cua so 1");
	else if (num2%num1==0)
		printf ("So 1 la uoc cua so 2");
	else
		printf ("So 1 va 2 ko phai la uoc cua nhau");
	return 0;
}
