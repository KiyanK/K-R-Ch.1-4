#include <stdio.h>
#include <limits.h>


int main(void)
{
  printf("Max char %d", CHAR_MAX);
  printf("Min char %d", CHAR_MIN);
  printf("Signed max char %d", SCHAR_MAX);
  printf("Signed min char %d", SCHAR_MIN);
  printf("Unsigned max char %d", SCHAR_MAX);

  return 0;
}
