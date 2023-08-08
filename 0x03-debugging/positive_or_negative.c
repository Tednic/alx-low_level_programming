#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>
#include "main.h"

void positive_or_negative(int i)
{
	srand(time(0)); 
	i = rand() - RAND_MAX / 2; 
	if (i == 0) 
	{
		printf("%d is zero\n", 0); 
	}
}
