#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - random number
 *
 * Return: positive or negative
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* if (n > 0)
	 * printf("is positive");
         * else if (n is 0)
	 * printf("is zero");
         * else if (n < 0)
	 * pritf("is negative");
	 */
        return (0);
}
