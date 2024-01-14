#include <stdio.h>

#define MAXLINE 1000

int rmBlanks(char line[]);
int togetline(char line[], int maxline);

int main()
{
 
 char line[MAXLINE];
 
 while (togetline(line, MAXLINE) > 0)
 {
  if (remove(line) > 0)
  {
   printf("%s", line);
  }
 }
}


int togetline(char line[],int limit)
{
    int c, i;

    for(i = 0;(i < limit-1) && ((c=getchar()) != EOF); i++)
        line[i] = c;

    line[i] = '\0';
    return i;
}


int rmBlanks(char line[])
{
 int i;
 
 i = 0;
 
 while (line[i] != '\n')
 {
  ++i;
 }
 --i;

 while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
 {
  --i;
 }
 if (i >= 0) {
  ++i;
  line[i] = '\n';
  ++i;
  line[i] = '\0';
 }
 return i;
}

