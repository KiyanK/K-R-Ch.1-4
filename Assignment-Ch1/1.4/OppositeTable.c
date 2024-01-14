#include <stdio.h>

main()
{
	float celsius, fahr;
	int lower, upper, step;
	
	lower = 0;
	upper = 20;
	step = 1;

	printf(" _____________\n");
        printf("|Celsius|Fahr |\n");
        printf("|_______|_____|\n");
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * 9.0/5.0) + 32.0;
		printf("|%2.1f   | %2.1f|\n", celsius, fahr);
		celsius = celsius + step;
	}
}
