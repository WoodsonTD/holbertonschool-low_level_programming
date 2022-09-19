#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* if 2 > 0: is positive
         * if 0: is zero
         * if 2 < 0: is negative */
        return (0);
}
