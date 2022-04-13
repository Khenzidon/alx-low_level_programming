#include "main.h"

/**
 * main - prints out the letter of the alphabets and a newline
 * return - 0 when succefully executed
 */
void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	
	_putchar('/n');
}
