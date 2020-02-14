#include "holberton.h"

/* int _isupper(int c)  checks for uppercase character */

int _isupper(int c);

int main(void)
{
	int c;

	c = 'A';

	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}
