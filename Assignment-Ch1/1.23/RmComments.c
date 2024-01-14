#include <stdio.h>

#define IN 1
#define OUT 0

int isquotationmark(char prev, char c)
{
 return prev != '\\' && prev != '\'' && c == '\"';
}

int main(void)
{
 int lastc, c;
 int comment, quote;

 comment = quote = OUT;
 lastc = getchar();
 while ((c = getchar()) != EOF) 
 {
  if (isquotationmark(lastc, c))
  {
   if (quote == IN)
   {
    quote = OUT; /* the end of quote */
   }		
   else if (comment == OUT)
    {
     quote = IN; /* the beginning of a quote */
    }
   }
   if (quote == OUT && lastc == '/' && c == '*')
   { 
    comment = IN; /* the beginning of a comment */
   }
   if (comment == OUT)
   {
    putchar(lastc); /* print previously read character */
   }
   if (comment == IN && lastc == '*' && c == '/') 
   {
    c = getchar(); /* skip '/' character */
    comment = OUT; /* the end of a comment */
   }
   lastc = c;
  }
  putchar(lastc);
  return 0;
}
