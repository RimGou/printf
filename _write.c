#include "main.h"
/**
  * _write - write the char c to stdout
  * @: char to print
  * Return: success = 1, error = -1
  */

int _write(char c)
{
	return (write(1, &c, 1));
}
