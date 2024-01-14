#include <stdio.h>

/*Copy input to output - basic*/

int main()
{
	int c;

	while ((c = getchar()) != EOF) 
		printf("%d\n", c);	
}
