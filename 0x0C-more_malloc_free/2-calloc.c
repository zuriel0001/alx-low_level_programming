#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/* lets define memset, a function that fills memory with a constant byte */

/**
 * my_memset - a function that fill memory with constact byte
 * @c: constact byte
 * @ptr_mem: pointer to memory to be filled
 * @n: number of times c was used
 */
char *my_memset(char *ptr_mem, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr_mem[i] = c;
	}
	return (ptr_mem);
}


/**
* _calloc - a function that allocates memory for an array, using malloc
* @nmemb: number of elements
* @size: array size in bytes
*
* Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr_arr = malloc(nmemb * size);

	if (ptr_arr == NULL)
		return (NULL);
/*if string header was added, we could used  memset(ptr, 0, nmemb * size) */
/* return (ptr_arr) */


my_memset(ptr_arr, 0, nmemb * size);

return (ptr_arr);
}

