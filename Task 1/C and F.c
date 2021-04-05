#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{ 
float F, C;
printf("Gia tri cua do C = ");
scanf("%f", &C);

F = C/5*9 + 32;
printf("%f do C = %f do F", C, F);

	return 0;
}
