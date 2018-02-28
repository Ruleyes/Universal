/* srand example */
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main ()
{
  printf ("First  number01: %d\n", rand()%100);
//  srand (time(NULL));
  printf ("Second  number02: %d\n", rand()%100);
  srand (1);
  printf ("Again the first number: %d\n", rand()%100);
  printf ("Again the second number: %d\n", rand()%100);
  return 0;
}

