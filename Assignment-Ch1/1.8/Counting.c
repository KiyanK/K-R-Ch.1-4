#include <stdio.h>

/*count blanks, tabs, and new lines*/

main()
{
	int c, nl, nb, nt;

	nl = 0;
	nb = 0;
	nt = 0;

	while ((c = getchar()) != EOF){

		if (c == '\n')
			++nl;

		if (c == ' ')
			++nb;

		if (c == '\t')
			++nt;
		}
		
		printf("Lines Blanks Tabs\n");
		printf("%d     %d      %d\n", nl, nb, nt);

}
