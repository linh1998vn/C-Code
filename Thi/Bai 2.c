#include <stdio.h>
#include <stdlib.h>

int main()
{  char str[30];
   int i;
   printf("Enter string: ");
   gets(str);
 	
   for(i=0;i<=strlen(str);i++)
   {
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("\nUpper Case: %s",str);
   return 0;
}
