#include <stdio.h>

#define MAXLINE 1000

void ReverseLine(char line[]);
int togetline(char line[], int maxline);

int main()
{
 int len;
 char line[MAXLINE]; 
 
 /*while there are characters in the line run reverse line*/
 while ((len = togetline(line, MAXLINE)) > 0)
 {
  ReverseLine(line);
 }
}

/*gets the line and puts it in an area, returns length*/
int togetline(char line[], int maxline)
{
 int c, i;

 for (i=0; i<maxline-1 && (c = getchar()) != EOF; ++i) 
 {
  line[i] = c;
 } 

 line[i] = '\0';
 return i;

}

/*reverses characters of the line*/
void ReverseLine(char line[])
{
 int i, j, len, temp;

 len = 0;

 /*count the number of characters and store the total in len*/
 for(i = 0; line[i] != '\0'; i++)
 {
  ++len;
 }
 
 /*go through each character coming outwards to inwards and swap them until the middle of the line(thats what the /2 is for after len)*/
 for(i = 0, j = len - 1; i < len/2; ++i, --j)
 {
  temp = line[i];
  line[i] = line[j];
  line[j] = temp;
 }
 printf("%s\n", line);
}
