#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE];

int togetline(int maxline);

int main()
{
  int t,len;
  int spaceholder;
  int FOLDLENGTH=10; /* The max length of a line */

  while (( len = togetline(MAXLINE)) > 0 )
  {
   if( len > FOLDLENGTH )
   {
    t = 0; 
    while(t<len)
    {
     if(line[t] == ' ')
     {
     spaceholder = t;
     }
     if(t==FOLDLENGTH)
     {
      line[spaceholder] = '\n';
      t = 0;
     }
     t++;
    }
   }
   printf ( "%s", line);
  }
  return 0;
}


int togetline(int lim)
{
 int c, i;

 for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
 {
  line[i] = c;
 }
 if (c == '\n')
 {
  line[i] = c;
  ++i;
 }
 line[i] = '\0';
 return i;
}

