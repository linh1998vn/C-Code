#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char c;
	
	printf ("Please enter any character in Alphabet (a-z): ");
    scanf ("%c", &c);	
	
	
	if (c>='A' && c<='Z' || c>='a' && c<='z')
		switch (c)
		{
			case 'a':
			case 'A':		
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			printf ("This character %c is vowel", c);
			break;
		default:
			printf ("This character %c is consonant", c);
		break;
		}
	else
		printf ("This character is not Alphabet");
							
	return 0;

}
