#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
	int r,num;
	printf("Nhap so:\n");
	scanf("%d",&num);
	
	r = num%2;

	if (r==0)
	{
	printf("Even Number");}
	
	else
	{
	printf("Odd Number");
	}

	return 0;
	}
