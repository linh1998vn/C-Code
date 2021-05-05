#include <stdio.h>
#include <stdlib.h>


int sum(int a,int b)
{
	int sum;
	sum=a+b;
	printf("\nTong la:%d",sum);
	return sum;
}

int sub(int a,int b)
{
	int sub;
	sub=a-b;
	printf("\nHieu la:%d",sub);
	return sub;
}

int multi(int a,int b)
{
	int mul;
	mul=a*b;
	printf("\nTich la:%d");
	return mul;
}

int diversion(int a,int b)
{
	float div;
	if(b==0)
		printf("Khong the thuc hien duoc phep tinh");
		else
		{
			div=(float)a/b;
			printf("\nThuong la:%.2f",div);
		}
		return div;
}

void main()
{
	int a, b;
	char choice, cal;
	
	printf ("\n\tTINH TOAN");
	printf("\n====================");
	printf("\n1. Nhap so");
	printf("\n2. Tinh tong");
	printf("\n3. Tinh hieu");
	printf("\n4. Tinh nhan");
	printf("\n5. Tinh chia");
	printf("\n6. Ket thuc");
	printf("\n====================");
	printf("\nChon: ");
		scanf ("%c", &choice);
	if (choice=='6')
			printf ("\nBan da chon ket thuc chuong trinh");
		else if (choice=='1')
		{
			printf ("\nHay nhap 2 so");
			printf ("\n\nNhap so a: ");
			fflush(stdin);
			scanf ("%d", &a);
			printf ("\nNhap so b: ");	
			fflush(stdin);		
			scanf ("%d", &b);

				printf ("\nHay chon phep tinh (2-5): ");
				fflush(stdin);	
				scanf ("%c", &cal);
				switch (cal)
				{
					case '2':
						sum(a, b);
					break;
					case '3':
						sub(a, b);
					break;
					case '4':
						multi(a, b);
					break;
					case '5':
						diversion(a, b);
					break;
				}
			}
			return 0;
		
		}
