#include "main.h"

/**
 * _memset - This function fills a memory with a constant byte.
 * The function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
  * @s: A pointer to the memory area to be filled by b.
  * It is the address of the memory to be filled by @b.
  * @b: The character to fill the memory area pointed to by @s.
  * @n: The number of bytes of memory area to be filled.
  * integer i is the index of the memory area
  * Return: A pointer to the memory area s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *mem_addr = s;

	char value = b;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		mem_addr[i] = value;
	}
	return (mem_addr);
}
