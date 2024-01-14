#include <stdio.h>

/* functions */
unsigned int setbits(unsigned, int, int, unsigned);

unsigned int setbits(unsigned x, int p, int n, unsigned y)
{
	unsigned nbits;

	nbits = ~(~0 << n); /* mask to extract rightmost n bits */

	return (x & ~(nbits << p)) | ((y & nbits) << p);
}

int main(void)
{
	unsigned x = 0XF8FF;
	unsigned y = 0XF0A2;
	int p = 8;                   /* starting position of bits */
	int n = 8;                   /* number of bits to set */

	printf("%x\n", setbits(x, p, n, y)); 

	return 0;
}

