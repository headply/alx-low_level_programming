#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print Small and capital a to z
 *
 * Return: always (0)
 */
int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z'; i++)
		putchar(i);
	for (i = 'a' ; i <= 'z'; i++)
		putchar(toupper(i));
	int putchar("\n");
	return (0);
}
