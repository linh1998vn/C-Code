#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{	
int num[10];
int i;

for(i=0;i<10;i++)
{
	printf("Nhap so thu %d:",i+1);
	scanf("%d",&num[i]);
}
for(i=1;i<10;i+=2)
	printf("\nCac phan tu o vi tri chan: %d",num[i]);
 return 0;
}
