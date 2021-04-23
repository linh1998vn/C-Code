#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int bd[4][30];
	int sv,sl,diem;
	int sum=0;
	
	printf("Nhap so luong sinh vien:");
	scanf("%d",&sl);
	
	for(sv=0;sv<sl;sv++)
		{
		for(diem=0;diem<4;diem++)
		{
		printf("\nNhap diem mon thu %d cua hoc sinh thu %d:",diem+1,sv+1);
		scanf("%d",&bd[diem][sv]);
		sum+=bd[diem][sv];
		}
		printf("\nTrung binh %.1f\n",(float)sum/4);
		}
	return 0;
}
