#include <stdio.h>
#include <stdlib.h>

int indexMin(int a[], int b)
{

	int i, min;
	
	min=a[0];
	
	for(i=0;i<b;i++)
	
		if(min>a[i]) min=a[i];

	return min;
}

int main()
{	int sl,i;
	int a[sl];
	
	printf("Nhap vao so luong:");
	scanf("%d",&sl);

for(i=0;i<sl;i++)
{
	printf("So o thu %d:",i+1);
	scanf("%d",&a[i]);
}
	printf("So nho nhat la:%d",indexMin(a,sl));
	
	return 0;
}


