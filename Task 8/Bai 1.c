#include <stdio.h>
#include <stdlib.h>


	int GetArea(float a, float b, float c)
	{
	float s;
	
	s=(sqrt((a*a+b*b+c*c)*(a*a+b*b+c*c)-2*(a*a*a*a+b*b*b*b+c*c*c*c)))/4;
	
	return s;
		
	}
	
	void main()
{	
	float a,b,c,d,s;
	
	printf("Nhap vao 3 canh tam giac:\n");
	printf("\na:");
	scanf("%f",&a);
	printf("\nb:");
	scanf("%f",&b);
	printf("\nc");
	scanf("%f",&c);
	
	s=GetArea(a, b, c);
	
	if (a+b>c)
	{
		{
		if(b+c>a)
			{
			if(c+a>b)
				printf ("Dien tich tam giac la: %.2f", s);
			}
		}
	}
	else
		printf("Day ko phai tam giac");
	
	return 0;
	
}
