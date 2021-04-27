#include <stdio.h>
#include <stdlib.h>

int check(int num)
{
	if (50%num==0)
		return 0;
	else
		return 1;
}

int main()
{
	int arr[100];
	int i, j;
	
	printf ("Nhap vao so luong so can check: ");
	scanf ("%d", &j);
	
	for (i=0; i<j; i++)
	{
		printf ("Nhap gia tri so thu %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("Nhung so la boi so cua 50 la: \n");
	for (i=0; i<j; i++)
	{
		if (check(arr[i])==0)	
			printf ("\n%d", arr[i]);
	}	
	return 0;
}
