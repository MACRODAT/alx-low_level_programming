#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 4) = 98;
  /* ...so that this prints 98\n */
  printf("%x\n", *p);
  printf("%x\n", &n);
  printf("%x\n", &a[0]);
  printf("%x\n", &a[1]);
  printf("%x\n", &a[2]);
  printf("%x\n", &a[3]);
  printf("%x\n", &a[4]);
  return (0);
}
