#include "main.h"

/**
*_isalpha -checks for alphabetic character
*returns: 1 if c is a letter ,lowecase or uppercase
*returns: 0 if false
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
