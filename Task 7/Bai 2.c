#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[5];
	float b[10];
	int i,j;
	
	for(i=0,j=0;i<5;i++,j++)
		{
		printf("Nhap vao so %d:",i+1);
		scanf("%d",&a[i]);
		b[j]=(float)a[i];
		}
	for(j=5; j<10; j++)
		b[j] = 0;
	
	for(i=0;i<5;i++)
		printf("\nPhan tu mang int:%d",a[i]);
	for(j=0;j<10;j++)
		printf("\nPhan tu mang float:%.2f",b[j]);
	
	return 0;
}
