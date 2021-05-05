#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{	int n,r;
	int sum=0;
	
	printf("Enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	
	printf("total digit:%d",sum);
	getch();
	return 0;
}
