#include <stdio.h>
#include <stdlib.h>

int main(ivoid) 
{
	int integer1;
	int integer2;
	int integer3;
	int sum;
	int average;
	
	printf ("Nhap Diem Toan\n");
	scanf ("%d", &integer1);
	
	printf ("Nhap Diem Ly\n");
	scanf ("%d", &integer2);
	
	printf ("Nhap Diem Hoa\n");
	scanf ("%d", &integer3);
	
	sum = integer1 + integer2 + integer3;
	average = sum/3;
	
	printf("Tong la %d, Trung binh la %d", sum, average);
	
	return 0;
}
