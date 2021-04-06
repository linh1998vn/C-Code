#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	float c;
	float f;
	
	printf("Nhap vao do C\n");
	scanf("%f",&c);
	
	f = c/5*9+32;
	printf("%.1f do C tuong ung voi %.1f do f",c,f);
	
	return 0;
}
