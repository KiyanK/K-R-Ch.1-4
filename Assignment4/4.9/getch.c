#include <stdio.h>
#include <string.h>

#define BUFSIZE 100

int getch(void);
void ungetch(int);

int main()
{
 char c;

 ungetch(EOF);

 while ((c = getch()) != EOF) {
  putchar(c);
 };

 return 0;
}

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
        return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
        if (bufp >= BUFSIZE) {
                printf("Ungetch: Too many characters.\n");
        /*
         * The check for EOF must be made here. If EOF is found, it is ignored.
         */
        } else if (c != EOF) {
                buf[bufp++] = c;
        }
}
