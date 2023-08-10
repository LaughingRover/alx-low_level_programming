#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: ptr is a pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: old_size is the size, in bytes, of the allocated space for ptr
 * @new_size: new_size is the new size, in bytes of the new memory block
 *
 * Description: The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of the old and
 * new sizes
 *
 * Return: If new_size == old_size do not do anything and return ptr.
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size.
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return  (new_ptr);

	/*Copy content of old memory block to new memory*/
	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	return (ptr);
}

