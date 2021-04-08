#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{int x;
	
	printf ("\t     MENU\n");
	printf ("==============================\n");
	printf ("1. CF\n");
	printf ("2. C\n");
	printf ("3. HDJ\n");
	printf ("4. DreamWeaver\n");
	printf ("5. RDBMS\n");
	printf ("6. Learn Java By Example\n");
	printf ("==============================\n");
	printf ("Please choice (1-6): ");
	scanf ("\n%d", &x);
	switch (x)
	{
		case 1:
			printf ("You choose CF !");
			break;
		case 2:
			printf ("You choose C !");
			break;
		case 3:
			printf ("You choose HDJ !");
			break;
		case 4:
			printf ("You choose DreamWeaver !");
			break;
		case 5:
			printf ("You choose RDBMS !");
			break;
		case 6:
			printf ("You choose Learn Java By Example !");
			break;
		default:
			printf ("Your choice is not correct !");
		break;
	}
	return 0;
}
