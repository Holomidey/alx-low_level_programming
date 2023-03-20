#include <stdio.h>
/**
 * main - do hard things
 *
 * Return: 0
*/

int main(void)
{
	char i;

	for (i = 'a' ; <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	return (0);
}
