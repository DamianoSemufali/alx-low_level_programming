#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * _strcmp - compare two strings
 *
 *   * @s1: one string
 *
 *    * @s2: one string
 *
 *     * Return: int that tells num spaces in between
 *
 *      */



int _strcmp(char *s1, char *s2)

{

		int i = 0;



			while (*(s1 + i) == *(s2 + i) && *(s1 + i))

						i++;



				if (*(s2 + i))

							return (*(s1 + i) - *(s2 + i));

					else

								return (0);

=======
/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
>>>>>>> 0c83d6f034189dceef3a18bacd2025dc9067048f
}
