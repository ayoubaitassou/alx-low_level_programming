#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';
	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++
	}
	putchr('\n');
	return (0);
}
