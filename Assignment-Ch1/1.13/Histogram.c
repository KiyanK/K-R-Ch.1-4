#include <stdio.h>

#define SIZE 11    /* size of lengths array */

int main()
{
  int c, i;
  char stars[11] = "***********";
  int wordLength[SIZE];
  int currentWordLength = 0;
  
  /* Read in the words */
  while ((c = getchar()) != EOF)
  {
    /* If there is a space or end of a word */
    if (c == ' ' || c == '\n' || c == '\t')
    {
      /* Any word greater than or equal to 11 will be treated the same */
      if (currentWordLength > 11) 
      {
        currentWordLength = 11;
      }

      /* Increment the counter by one */
      wordLength[currentWordLength - 1] ++;

      /* Reset the current word length counter */
      currentWordLength = 0;
    }
    /* A letter was typed */
    else
    {
      currentWordLength ++;
    }
  }

  /* Decrement the 2 letter by 1 because of %d */
  wordLength[1] --;

  printf("Histogram\n");  

  /* Output the histogram */
  for (i = 0; i < SIZE; i ++)
  {
    printf("%.*s - %d\n", i+1, stars, wordLength[i]);
  } 

}		
