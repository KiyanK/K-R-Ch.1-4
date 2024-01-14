#include <stdio.h>

#define MAXLENGTH 1000 /*maximum input line size*/

int togetline(char line[], int maxline);
void copy(char to[], char from[]);


int main()
{
 int length;	/*current line length*/
 int max;	/*maximum length seen so far*/
 char line[MAXLENGTH];	/*current input line*/
 char longest[MAXLENGTH]; 	/*longest line saved here*/

 max = 0;

 while((length = togetline(line, MAXLENGTH)) > 0)
  {
   if (length > max)       /*if length of the line is greater than the max*/
   {
    max = length;
    copy(longest, line);
   }
  }
    
  if (max > 0)
  {
   printf("the longest line:\n %s", longest);
  } 
  return 0; 
 
}


int togetline(char line[],int limit)
{
    int c, i;

    for(i = 0;(i < limit-1) && ((c=getchar()) != EOF); i++)
        line[i] = c;
    
    line[i] = '\0';
    return i;
}


void copy(char to[], char from[])
{
 int i;
 
 i = 0;
 while ((to[i] = from[i]) != '\0')
 {
  ++i;
 }
}
