#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{ 
float bk,dt,cv;

printf("Ban kinh hinh tron la:\n");
scanf("%f",&bk);

cv = 2*bk*3.14;
dt = bk*bk*3.14;

printf("Chu vi hinh tron la:%.2f\n",cv);
printf("Dien tich hinh tron la:%.2f",dt);
	   	
	return 0;
}
