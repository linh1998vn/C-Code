#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{ int a;

printf("Nhap vao mot so nguyen:");
scanf("%d",&a);

if(a>0)
{printf("Day la so nguyen duong");
}

else
if (a<0)
{printf("Day la so nguyen am");
}
else 
if (a==0)
{printf("Day la so 0");
}
	return 0;
}
