#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * _strlen - returns the length of a string
 *
 *   * @s: string
 *
 *    * Return: length
 *
 *     */



int _strlen(char *s)

{

		int len = 0;



			while (*s != '\0')

					{

								len++;

										s++;

											}



				return (len);

=======
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
>>>>>>> 0c83d6f034189dceef3a18bacd2025dc9067048f
}
