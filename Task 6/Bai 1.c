#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{	char x;
    x=0;
	printf("Nhap vao mot ky tu:");
	scanf("%c",&x);
	
	printf("\nMa ASCII cua ky tu %c la: %d\n",x,x);
	
	x=0;
	fflush(stdin);
	printf("\n\n\nNhap vao mot ky tu:");
	x= getchar();
	printf("\nMa ASCII cua ky tu %c la: %d\n",x,x);
	
	
	return 0;
}
