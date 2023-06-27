#include "main.h"

/**
  * _abs - computes the absolute vakue of an integer
  * @N: value of integer
  * Return: positive value always for int
  */

int _abs(int N)
{
	if (N < 0)
	{
		N = (-1) * N;
		return (N);
	}

	else
		return (N);
}
