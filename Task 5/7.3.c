#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
int num , res ;
 printf("Enter a number :");
 scanf("%d",&num);
 res = num % 2;
 if (res == 0)
 printf("The number is Even");
 else
 printf("The number is Odd");
	return 0;
}
