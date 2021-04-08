#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int num1, num2;
	char choice;
	
	printf ("Nhap vao 2 so \n");
	printf ("So 1: ");
	scanf ("%d", &num1);
	printf ("So 2: ");
	scanf ("%d", &num2);
	
	
	printf ("\tMENU\n");
	printf ("====================\n");
	printf ("+\n");
	printf ("-\n");
	printf ("x\n");
	printf (":\n");
	printf ("====================\n");
	
	fflush(stdin);
	printf ("Choice (+,-,x,:) ");
	scanf ("%c",&choice);
	
	switch (choice)
		{
			case '+':
			printf ("%d + %d = %d", num1, num2, num1+num2);
			break;
			case '-':
			printf ("%d - %d = %d", num1, num2, num1-num2);
			break;
			case 'x':
			printf ("%d x %d = %d", num1, num2, num1*num2);
			break;
			case 'X':
			printf ("%d x %d = %d", num1, num2, num1*num2);
			break;
			case ':':
			printf ("%d : %d = %.2f", num1, num2, (float)num1/num2);
			break;
		default:
		printf ("Ko chinh xac");
		break;
		}
	return 0;
}
