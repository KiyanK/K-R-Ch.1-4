#include <stdio.h>

#define IN 1  /*inside a word*/
#define OUT 0 /*outside a word*/

main()
{
	int c,nl, nc,  nw, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		if (state == OUT) {
			state = IN;
			++nw;
		} 
	}
	printf("%d %d %d\n", nw, nl, nc);
}



/*You would test the word count program by 
- typing no input
- typing one character
- typing two character word
- typing two words each with two characters
- typing two words each with two characters and two seperate lines
- typing words on more than two lines
- type multiple lines with spaces at the front of the lines
- type multiple lines with taps in between words
*/
