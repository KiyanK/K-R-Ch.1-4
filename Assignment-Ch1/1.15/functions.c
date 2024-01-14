#nclude <stdio.h>

float celsius(float fahr);


main()
{
        float fahr;
        int lower, upper, step;
	int i;
        lower = 0;
        upper = 300;
        step = 20;

        printf(" _____________\n");
        printf("|Fahr |Celsius|\n");
        printf("|_____|_______|\n");


        fahr = lower;
        while (fahr <= upper)
	{
                printf("|%3.0f  | %6.1f|\n", fahr, celsius(fahr));
                fahr = fahr + step;
        }
}
        float celsius(float fahr)
	{ 
		return (5.0/9.0) * (fahr-32.0);
	}
