#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: string to be printed
 */
void _puts(char *str)

	int i;

	for (i = 0; str[1] != '\0'; i++)
        {
		_putchar(str[i]);
	}
        _putchar('\n');
