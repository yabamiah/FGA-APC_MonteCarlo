#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

#include "point.h"

void randomNumber(long long dardos, point_t points[])
{
  srand(time(NULL));

  for(long long i = 0; i < dardos; ++i)
  {
    points[i].pX = (long double) rand() / RAND_MAX;
    points[i].pY = (long double) rand() / RAND_MAX;
  }
}
