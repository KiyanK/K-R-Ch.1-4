#include <stdio.h>

#define MAXLINE 1000
#define LONGLENGTH 80

int togetline(char line[], int maxline);

main()
{
 int len;
 char line[MAXLINE];

 while ((len = togetline(line, MAXLINE)) > 0)
 {
  if (len > LONGLENGTH)
  {
   printf("The lines longer than 80 characters: \n\t %s\n", line);
  }
 }

 return 0;
}

int togetline(char line[], int maxline)
{
 int c, i, j;

 j = 0;
 for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
 {
  if (i < maxline)
  {
   line[j] = c;
   ++j;
  }
 }
 if (c == '\n')
 {
  line[j] = c;
  ++i;
  ++j;
 }

 line[j] = '\0';
 return i;
}
