#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	Putchar('\n');

	return (0);
}
