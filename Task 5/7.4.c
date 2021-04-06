#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
char c;
 printf("Please enter a character : ");
 scanf("%c",&c);
 if (c >= 'A' && c <= 'Z')
 
 printf("Lowercase character = %c", c + 'a' - 'A');
 
 else
 
 printf("Character Entered is = %c",c);

	return 0;
}
