
#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
  * @dest: pointer to memory address expecting n bytes of characters from @src
  * @src: the buffer containing the n bytes of charcaters to be copied
  * @n: the amount of character bytes to be copied from @src
  * integer i is the index of the memory area
  * Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mem_addr2 = dest;

	const char *mem_addr1 = src;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		mem_addr2[i] = mem_addr1[i];
	}
	return (mem_addr2);
}
