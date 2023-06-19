#include <stdlib.h>
#include <unistd.h>

/**
 * srand - a function that overwrites the srand function in a library shared objects
 *
 * @seed_num: seed to use for the random number generator
 */

void srand(unsigned int seed_num)
{
	const char *nums = "9 8 10 24 75 - 9\n";
	const char *txt = "Congratulations, you win the Jackpot!\n";

	(void)seed_num;
	write(STDOUT_FILENO, (void *)nums, 17);
	write(STDOUT_FILENO, (void *)txt, 38);
	exit(EXIT_SUCCESS);
}
