#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
 int tuoi;
 float luong;
 
 printf("Nhap vao tuoi\n");
 scanf ("%d",&tuoi);
 
 printf("Nhap vao luong\n");
 scanf ("%f",&luong);
 
 printf("Tuoi:%d",tuoi);
 printf("Luong:%.2f\n",luong);
 
	return 0;
}
