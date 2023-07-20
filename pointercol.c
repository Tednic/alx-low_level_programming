#include <stdio.h>

int main(void)
{
	int num;
	int coll[9];
	int *ptr = &num;

	printf("size of pointer (ptr) is: %lu\n", sizeof(ptr));
	printf("Address of pointer (ptr) is : %p\n", &ptr);

	coll[4] = 20;

	*(ptr + 7) = 49;

	printf("\ncoll[4] = %d\n", coll[4]);
	printf("\n");

	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("coll[%d] = %d with address as %p\n", i, coll[i], &coll[i]);
	}
	return (0);
}
