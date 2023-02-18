#include <stdio.h>
/**
 * main- print the alphabets in lowercase,
 * followed by a new line
 * Return: Always 0 (succcess)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
