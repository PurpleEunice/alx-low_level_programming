#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int cnt = 0, cnt2 = 0;

	while (*(dest + cnt) != '\0')
	{
		cnt++;
	}

	while (cnt2 < n)
	{
		*(dest + cnt) = *(src + cnt2);
		if (*(src + cnt2) == '\0')
			break;
		cnt++;
		cnt2++;
	}
	return (dest);
}
