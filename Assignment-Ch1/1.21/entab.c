#include <stdio.h>

#define TAB 8 

int main()
{
 int c, numblanks, numtabs, pos;

 numblanks = 0;
 numtabs = 0;
 
 for (pos = 1; (c = getchar()) != EOF; ++pos)
 {
  if (c == ' ')
  {
   /*if the position number and TAB value are not the same, add a blank*/
   if (pos % TAB != 0)
   {
    ++numblanks;
   }
   /*if the position number and TAB value are the same, replace the blanks with a tab*/
   else
   {
    numblanks = 0;
    ++numtabs;
   }
 }
 else
 {
  for ( ; numtabs > 0 ; --numtabs)
  {
   putchar('\t');
  }
  if (c == '\t')
  {
   numblanks = 0;
  }
  else
  {
   for ( ; numblanks > 0; --numblanks)
   {
    putchar(' ');
   }
  }
  putchar(c);
  if (c == '\n')
  {
   pos = 0;
  }
  else if (c == '\t')
  {
   pos = pos + (TAB - (pos-1) % TAB) - 1;
  }
 }
}
}
