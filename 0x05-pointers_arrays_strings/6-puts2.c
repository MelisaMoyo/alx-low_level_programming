#include "main.h"
/**
<<<<<<< HEAD
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
=======
 * puts2 - function that prints every other character ofca string
 * starting with the first one
 * @str: input
 * Return:print
>>>>>>> d1efc07e8506123b1ab954a95a03545f9131ee54
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
<<<<<<< HEAD
		if (0 % 2 == 0)
=======
		if (o % 2 == 0)
>>>>>>> d1efc07e8506123b1ab954a95a03545f9131ee54
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
<<<<<<< HEAD
=======


>>>>>>> d1efc07e8506123b1ab954a95a03545f9131ee54
