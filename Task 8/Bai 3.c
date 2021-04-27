#include <stdio.h>
#include <stdlib.h>

int reverse(int a[],int b)
{	
	int i;
	for(i=b-1;i>=0;i--)

		printf("\t%d",a[i]);
	
	return a;
}

int main()
{
	int a[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Nhap vao so thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Thu tu nguoc lai la:\n");
	reverse(a,5);
	
}
