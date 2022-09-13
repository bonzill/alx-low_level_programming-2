#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

int main(void)
/*main - Entry point
 *Return: Always 0 (Success)
*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n > 0)
	{
		printf("%i is positive\n",n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n",n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n",n);
	}

	return (0);
}
