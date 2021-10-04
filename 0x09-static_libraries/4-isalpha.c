#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * _isalpha - checks for alphabet character
 *
 *   * @c: character to check
 *
 *    * Return: 1 if lower or uppercase, 0 if not alphabet character
 *
 *     */



int _isalpha(int c)

{

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

				{

							return (1);

								}

			else

					{

								return (0);

									}

				_putchar('\n');

=======
/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
>>>>>>> 0c83d6f034189dceef3a18bacd2025dc9067048f
}
