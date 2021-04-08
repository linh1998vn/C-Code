#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{ 	char x;
	
	  printf("Nhap vao mot chu trong bang Alphabet(A-Z.a-z):");
	  scanf("%c",&x);
	
	switch(x)
	{       case '0':			
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			printf ("\nKy tu '%c' la chu so", x);
			break;
			
		default:
		   if(x>='A' && x<='Z')
		      printf("Ky tu '%c' la chu hoa",x);	
	 
	 	   else if(x>='a' && x<='z')
	 		  printf("\nKy tu %c' la chu thuong",x);
	 	   else 
	 	   	  printf("\nKy tu '%c' khong nam trong bang Alphabet va ko phai la chu so(0-9)",x);
	 }
	   
	return 0;
}
