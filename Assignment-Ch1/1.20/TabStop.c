#include <stdio.h>

#define MAXLEN 1000
#define N 4

void detab(char in[], char out[]);
int getLine(char [], int);

int main(void)
{
 char in[MAXLEN]; /* currently read line */
 char out[MAXLEN]; /* modified line */

 while (getLine(in, MAXLEN) > 0) 
 {
  detab(in, out);
  printf("%s", out);
 }
 return 0;
}

/* getLine function: read a line into s, return length */
int getLine(char s[], int lim)
{
 int c, i;

 for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
 { 
  s[i] = c;
 }
 if (c == '\n') 
 {
  s[i] = c;
  ++i;
 }
 s[i] = '\0';
 return i;
}

/* detab function: replaces tabs with the proper number of blanks */
void detab(char in[], char out[])
{
 int i;
 int j; 
 int nblanks; 

 for (i = j = 0; in[i] != '\0'; ++i)
 { 
  if (in[i] == '\t')
  {
   nblanks = N - (j % N);
   while (nblanks-- > 0)
   {
    out[j++] = ' ';
   }
  } 
  else
  { 
   out[j++] = in[i];
  }
  out[j] = '\0';
 }
}

