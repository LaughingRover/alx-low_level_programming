#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: integer (number of elements)
 * @size: integer (size in bytes)
 *
 * Description: The _calloc function allocates memory
 * for an array of nmemb elements of size bytes each and
 * returns a pointer to the allocated memory.
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/*Set the allocated memory to zero using memset*/
	memset(ptr, 0, nmemb * size);

	return (ptr);
}

