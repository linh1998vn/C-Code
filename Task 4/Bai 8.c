#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	printf ("Kieu int:%d Byte\n",sizeof(int));
	printf ("So nguyen:15\n\n");
	
	printf ("Kieu float:%d Byte\n",sizeof(float));
	printf ("So thuc kieu float: %f\n\n", 3.456);
	
	printf ("Kieu double:%d Byte\n", sizeof(double));
	printf ("So thuc kieu double:3.4567891235\n\n");
	
	printf ("Kieu char: %d Byte\n",sizeof(char));
	printf ("Ky tu:E");
	
	printf ("Kieu long int:%d Byte\n\n",sizeof(long int));
	
	printf ("Kieu long double:%d Byte\n\n",sizeof(long double));
	
	getch();
	
	return 0;
}
