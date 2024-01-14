#include <stdio.h>

/* functions */
unsigned int invert(unsigned int, int, int);

unsigned int invert(unsigned int x, int p, int n)
{
	unsigned nbits;
	
	nbits = ~(~0 << n);

	return (x & ~(nbits << p)) | (nbits & ~(x & nbits << p));
}

int main(void)
{
	unsigned int x = 0XFFFE;
	int p = 0;                   /* starting position of bits */
	int n = 4;                   /* number of bits to set */

	printf("%x\n", invert(x, p, n)); 

	return 0;
}
