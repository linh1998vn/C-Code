#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{   float x;
	char choice;
	
	printf ("Nhap do dai ban muon doi(m): ");
	scanf ("%f", &x);
	fflush(stdin);
	printf ("\n 1.mm\n 2.cm\n 3.dm\n 4.km\n");
	printf ("\nChon don vi ban muon doi (1-4): ");
	scanf	("%c", &choice);
	
	switch (choice)
	{
		case '1':
		printf ("\nDo dai = %.2f mm \n", x*1000);
		break;
		case '2':
		printf ("\nDo dai = %.2f cm \n", x*100);
		break;
		case '3':
		printf ("\nDo dai = %.2f dm \n", x*10);
		break;
		case '4':
		printf ("\nDo dai = %.2f km \n", x/1000);
		break;
	default:
	printf ("Nhap so ko chinh xac");
	break;
	}
	return 0;
}
