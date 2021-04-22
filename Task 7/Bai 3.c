#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
int a[10];
int i;
int sum=0;
int max=0;
int min=0;
int cmax=0;
int cmin=0;
	
for(i=0;i<10;i++)
{
	printf("Nhap so thu %d:",i+1);
	scanf("%d",&a[i]);
}
	
	min=a[0];
	max=a[0];

for(i=0;i<10;i++)
{
	if(min>a[i]) min=a[i];
	if(max<a[i]) max=a[i];
	sum+=a[i];
}
for (i=0; i<10; i++)
	{
		if (min==a[i]) cmin++;
		if (max==a[i]) cmax++;
	}
	printf ("\nMax la: %d", max); 
	printf ("\nSo lan xuat hien: %d", cmax);
	printf ("\nMin la: %d", min);
	printf ("\nSo lan xuat hien: %d", cmin);
	printf ("\nTong la: %d", sum);
	printf ("\nTrung binh la: %.1f", (float)sum/10);	
	return 0;
}
