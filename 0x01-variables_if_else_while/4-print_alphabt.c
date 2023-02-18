#include <stdio.h>

/**
 * main - printd the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (ls != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');

	return (0);
