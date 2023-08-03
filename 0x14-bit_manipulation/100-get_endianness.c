/*
 * Endianness is the order in which bytes are stored ina multi-byte
 * data-type, such as float or int.
 */

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void) 
{ 
	int num = 1; /*create an int with value 1*/
	char *endian = (char *)&num; /*cast it to a char pointer*/
	if (*endian == 1) /* if first byte is 1*/
		return (1); /*return 1 (little endian)*/
	return (0); /*else return 0 (Big endian)*/
}

