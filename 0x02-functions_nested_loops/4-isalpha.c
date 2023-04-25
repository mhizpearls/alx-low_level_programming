#include "main.h"

/**
 *  * _isalpha - Checks if a character is alphabetic.
 *  @c: The character to be checked.
 *
 *  Return: 1 if character is alphabetic or 0 for anything else
 */

int _isalpha(int c)
{
		if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
		{
			return (1);
		}
		return (0);

}
