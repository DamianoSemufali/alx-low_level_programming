#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * _memcpy - copy n bytes of memory from source to destination
 *
 *   * @dest: destination
 *
 *    * @src: source
 *
 *     * @n: number of bytes
 *
 *      * Return: pointer to dest
 *
 *       */



char *_memcpy(char *dest, char *src, unsigned int n)

{



		int size = n; /* only accept positive sizes */



			if (size > 0)

					{

								int i;



										for (i = 0; i < size; i++)

														dest[i] = src[i];

											}



				return (dest);

=======
/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
>>>>>>> 0c83d6f034189dceef3a18bacd2025dc9067048f
}
